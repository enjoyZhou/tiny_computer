package com.example.tiny_computer

import android.content.Intent
import androidx.annotation.NonNull
import androidx.annotation.Keep
import androidx.appcompat.app.AppCompatDelegate
import com.gaurav.avnc.util.AppPreferences
import io.flutter.embedding.android.FlutterActivity
import io.flutter.embedding.engine.FlutterEngine
import io.flutter.plugin.common.MethodChannel


class MainActivity: FlutterActivity() {
    
    @Keep
    lateinit var prefs: AppPreferences

    private fun updateNightMode(theme: String) {
        val nightMode = when (theme) {
            "light" -> AppCompatDelegate.MODE_NIGHT_NO
            "dark" -> AppCompatDelegate.MODE_NIGHT_YES
            else -> AppCompatDelegate.MODE_NIGHT_FOLLOW_SYSTEM
        }
        AppCompatDelegate.setDefaultNightMode(nightMode)
    }

    override fun configureFlutterEngine(@NonNull flutterEngine: FlutterEngine) {
        super.configureFlutterEngine(flutterEngine)
        prefs = AppPreferences(this)
        prefs.ui.theme.observeForever { updateNightMode(it) }
        MethodChannel(flutterEngine.dartExecutor.binaryMessenger, "avnc").setMethodCallHandler {
            // 注册通道并设置方法调用处理器
            call, result ->
            // 判断方法名
            when (call.method) {
                "launchUsingUri" -> {
                    com.gaurav.avnc.ui.vnc.startVncActivity(this, com.gaurav.avnc.vnc.VncUri(call.argument("vncUri")!!))
                    result.success(0)
                }
                "launchPrefsPage" -> {
                    startActivity(Intent(this, com.gaurav.avnc.ui.prefs.PrefsActivity::class.java))
                    result.success(0)
                }
                "launchAboutPage" -> {
                    startActivity(Intent(this, com.gaurav.avnc.ui.about.AboutActivity::class.java))
                    result.success(0)
                }
                else -> {
                    // 不支持的方法名
                    result.notImplemented()
                }
            }
        }
    }

}

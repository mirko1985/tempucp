package com.uc.ucplayerandroid;

import android.os.Bundle;
import android.support.v7.app.AppCompatActivity;
import android.widget.TextView;

import uc.player.common.RandomString;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        RandomString re = new RandomString("ANDROID");

        TextView tv = findViewById(R.id.textView);

        tv.setText(re.randomString());

    }
}

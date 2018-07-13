package com.uc.ucplayerandroid;

import android.os.Bundle;
import android.support.v7.app.AppCompatActivity;
import android.widget.TextView;

import org.jetbrains.annotations.NotNull;

import uc.player.common.Player;
import uc.player.common.UUID;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        TextView tv = findViewById(R.id.textView);


        Player pl = new Player(new UUID() {
            @NotNull
            @Override
            public String randomUUID() {
                return java.util.UUID.randomUUID().toString();
            }
        });

        tv.setText(pl.getUUID());
    }
}

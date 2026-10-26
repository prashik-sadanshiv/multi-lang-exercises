package com.example.demo;

import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RestController;

@RestController
public class HelloController {

    @GetMapping("/")
    public String hello() {
        return "Hello! Spring boot is working successfully";
    }

    @GetMapping("/hello")
    public String sayHello() {
        return "Hello world from java Spring boot"; 
    }
}
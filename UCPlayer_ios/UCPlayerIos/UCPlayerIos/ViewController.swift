//
//  ViewController.swift
//  UCPlayerIos
//
//  Created by Mirko Ilic on 7/10/18.
//  Copyright © 2018 Mirko Ilic. All rights reserved.
//

import UIKit
import Base

class ViewController: UIViewController {

    @IBOutlet weak var label: UILabel!
    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view, typically from a nib.
        var rs = BaseRandomString(text: "IOS")
        
        label.text = rs.randomString()
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }


}


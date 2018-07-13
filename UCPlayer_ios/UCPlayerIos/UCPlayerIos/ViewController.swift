//
//  ViewController.swift
//  UCPlayerIos
//
//  Created by Mirko Ilic on 7/10/18.
//  Copyright © 2018 Mirko Ilic. All rights reserved.
//

import UIKit
import UCPlayer_ios

class ViewController: UIViewController {

    class IosUUID: NSObject, UCPUUID{
        func randomUUID() -> String {
            return UUID().uuidString
        }
        
    }
    
    @IBOutlet weak var label: UILabel!
    override func viewDidLoad() {
        super.viewDidLoad()
        
        let uuid = IosUUID()
        let player = UCPPlayer(uuid: uuid)
        
        label.text = player.getUUID()
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }


}


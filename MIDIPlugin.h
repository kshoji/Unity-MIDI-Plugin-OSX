//
//  MIDIPlugin.h
//  MIDIPlugin
//
//  Created by Kaoru Shoji on 2022/09/28.
//

#ifndef MIDIPlugin_h
#define MIDIPlugin_h

const char *GAME_OBJECT_NAME = "MidiManager";

@interface MidiPlugin : NSObject

- (void) getMidiDevices;

@end

#endif /* MIDIPlugin_h */

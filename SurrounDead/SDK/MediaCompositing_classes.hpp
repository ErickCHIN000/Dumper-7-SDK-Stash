#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x100 - 0xF0)
// Class MediaCompositing.MovieSceneMediaPlayerPropertySection
class UMovieSceneMediaPlayerPropertySection : public UMovieSceneSection
{
public:
	class UMediaSource*                          MediaSource;                                       // 0xF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLoop;                                             // 0xF8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1297[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneMediaPlayerPropertySection* GetDefaultObj();

};

// 0x8 (0xD0 - 0xC8)
// Class MediaCompositing.MovieSceneMediaPlayerPropertyTrack
class UMovieSceneMediaPlayerPropertyTrack : public UMovieScenePropertyTrack
{
public:
	uint8                                        Pad_12B8[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneMediaPlayerPropertyTrack* GetDefaultObj();

};

// 0x160 (0x250 - 0xF0)
// Class MediaCompositing.MovieSceneMediaSection
class UMovieSceneMediaSection : public UMovieSceneSection
{
public:
	class UMediaSource*                          MediaSource;                                       // 0xF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MediaSourceProxyIndex;                             // 0xF8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLooping;                                          // 0xFC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12DE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFrameNumber                          StartFrameOffset;                                  // 0x100(0x4)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12E1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMediaTexture*                         MediaTexture;                                      // 0x108(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMediaSoundComponent*                  MediaSoundComponent;                               // 0x110(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseExternalMediaPlayer;                           // 0x118(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12EF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMediaPlayer*                          ExternalMediaPlayer;                               // 0x120(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMediaSourceCacheSettings             CacheSettings;                                     // 0x128(0x8)(Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	int32                                        TextureIndex;                                      // 0x130(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasMediaPlayerProxy;                              // 0x134(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12FA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMovieSceneBoolChannel                ChannelCanPlayerBeOpen;                            // 0x138(0x100)(NativeAccessSpecifierPublic)
	struct FMovieSceneObjectBindingID            MediaSourceProxyBindingID;                         // 0x238(0x18)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMovieSceneMediaSection* GetDefaultObj();

};

// 0x18 (0xB0 - 0x98)
// Class MediaCompositing.MovieSceneMediaTrack
class UMovieSceneMediaTrack : public UMovieSceneNameableTrack
{
public:
	uint8                                        Pad_132D[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UMovieSceneSection*>            MediaSections;                                     // 0xA0(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMovieSceneMediaTrack* GetDefaultObj();

};

}


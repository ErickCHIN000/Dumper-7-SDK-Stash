#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x128 - 0xE8)
// Class GeometryCacheTracks.MovieSceneGeometryCacheSection
class UMovieSceneGeometryCacheSection : public UMovieSceneSection
{
public:
	struct FMovieSceneGeometryCacheParams        Params;                                            // 0xE8(0x40)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMovieSceneGeometryCacheSection* GetDefaultObj();

};

// 0x18 (0x90 - 0x78)
// Class GeometryCacheTracks.MovieSceneGeometryCacheTrack
class UMovieSceneGeometryCacheTrack : public UMovieSceneNameableTrack
{
public:
	uint8                                        Pad_20C[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UMovieSceneSection*>            AnimationSections;                                 // 0x80(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMovieSceneGeometryCacheTrack* GetDefaultObj();

};

}



#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x110 - 0xE0)
// Class GeometryCollectionTracks.MovieSceneGeometryCollectionSection
class UMovieSceneGeometryCollectionSection : public UMovieSceneSection
{
public:
	struct FMovieSceneGeometryCollectionParams   Params;                                            // 0xE0(0x30)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMovieSceneGeometryCollectionSection* GetDefaultObj();

};

// 0x10 (0x68 - 0x58)
// Class GeometryCollectionTracks.MovieSceneGeometryCollectionTrack
class UMovieSceneGeometryCollectionTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>            AnimationSections;                                 // 0x58(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMovieSceneGeometryCollectionTrack* GetDefaultObj();

};

}



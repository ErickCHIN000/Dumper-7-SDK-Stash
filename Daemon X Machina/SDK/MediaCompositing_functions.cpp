#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class MediaCompositing.MovieSceneMediaSection
// (None)

class UClass* UMovieSceneMediaSection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneMediaSection");

	return Clss;
}


// MovieSceneMediaSection MediaCompositing.Default__MovieSceneMediaSection
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneMediaSection* UMovieSceneMediaSection::GetDefaultObj()
{
	static class UMovieSceneMediaSection* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneMediaSection*>(UMovieSceneMediaSection::StaticClass()->DefaultObject);

	return Default;
}


// Class MediaCompositing.MovieSceneMediaTrack
// (None)

class UClass* UMovieSceneMediaTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneMediaTrack");

	return Clss;
}


// MovieSceneMediaTrack MediaCompositing.Default__MovieSceneMediaTrack
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneMediaTrack* UMovieSceneMediaTrack::GetDefaultObj()
{
	static class UMovieSceneMediaTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneMediaTrack*>(UMovieSceneMediaTrack::StaticClass()->DefaultObject);

	return Default;
}

}



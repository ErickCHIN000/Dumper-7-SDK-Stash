#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class GbxLevelEditorPreview.GbxLevelEditorPreviewComponent
// (SceneComponent)

class UClass* UGbxLevelEditorPreviewComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxLevelEditorPreviewComponent");

	return Clss;
}


// GbxLevelEditorPreviewComponent GbxLevelEditorPreview.Default__GbxLevelEditorPreviewComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxLevelEditorPreviewComponent* UGbxLevelEditorPreviewComponent::GetDefaultObj()
{
	static class UGbxLevelEditorPreviewComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxLevelEditorPreviewComponent*>(UGbxLevelEditorPreviewComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxLevelEditorPreview.GbxLevelEditorPreviewDefinition
// (None)

class UClass* UGbxLevelEditorPreviewDefinition::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxLevelEditorPreviewDefinition");

	return Clss;
}


// GbxLevelEditorPreviewDefinition GbxLevelEditorPreview.Default__GbxLevelEditorPreviewDefinition
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxLevelEditorPreviewDefinition* UGbxLevelEditorPreviewDefinition::GetDefaultObj()
{
	static class UGbxLevelEditorPreviewDefinition* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxLevelEditorPreviewDefinition*>(UGbxLevelEditorPreviewDefinition::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxLevelEditorPreview.GbxLevelEditorPreviewAnimation
// (None)

class UClass* UGbxLevelEditorPreviewAnimation::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxLevelEditorPreviewAnimation");

	return Clss;
}


// GbxLevelEditorPreviewAnimation GbxLevelEditorPreview.Default__GbxLevelEditorPreviewAnimation
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxLevelEditorPreviewAnimation* UGbxLevelEditorPreviewAnimation::GetDefaultObj()
{
	static class UGbxLevelEditorPreviewAnimation* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxLevelEditorPreviewAnimation*>(UGbxLevelEditorPreviewAnimation::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxLevelEditorPreview.GbxLevelEditorPreviewSettings
// (None)

class UClass* UGbxLevelEditorPreviewSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxLevelEditorPreviewSettings");

	return Clss;
}


// GbxLevelEditorPreviewSettings GbxLevelEditorPreview.Default__GbxLevelEditorPreviewSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxLevelEditorPreviewSettings* UGbxLevelEditorPreviewSettings::GetDefaultObj()
{
	static class UGbxLevelEditorPreviewSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxLevelEditorPreviewSettings*>(UGbxLevelEditorPreviewSettings::StaticClass()->DefaultObject);

	return Default;
}

}



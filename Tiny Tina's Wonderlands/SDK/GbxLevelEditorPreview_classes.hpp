#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x2F0 - 0x2D0)
// Class GbxLevelEditorPreview.GbxLevelEditorPreviewComponent
class UGbxLevelEditorPreviewComponent : public USceneComponent
{
public:
	class UGbxLevelEditorPreviewDefinition*      Definition;                                        // 0x2D0(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxLevelEditorPreviewInstanceData    InstanceData;                                      // 0x2D8(0x8)(Edit, NoDestructor, NativeAccessSpecifierPrivate)
	class FString                                CachedInstanceNamePrefix;                          // 0x2E0(0x10)(ZeroConstructor, Transient, DuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UGbxLevelEditorPreviewComponent* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class GbxLevelEditorPreview.GbxLevelEditorPreviewDefinition
class UGbxLevelEditorPreviewDefinition : public UObject
{
public:
	class FText                                  PreviewTitle;                                      // 0x28(0x18)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGbxLevelEditorPreviewDefinition* GetDefaultObj();

};

// 0x10 (0x50 - 0x40)
// Class GbxLevelEditorPreview.GbxLevelEditorPreviewAnimation
class UGbxLevelEditorPreviewAnimation : public UGbxLevelEditorPreviewDefinition
{
public:
	TArray<struct FPreviewAnimationDescriptor>   DescriptorList;                                    // 0x40(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGbxLevelEditorPreviewAnimation* GetDefaultObj();

};

// 0x8 (0x40 - 0x38)
// Class GbxLevelEditorPreview.GbxLevelEditorPreviewSettings
class UGbxLevelEditorPreviewSettings : public UDeveloperSettings
{
public:
	bool                                         AllowLevelEditorPreviewComponent;                  // 0x38(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5F9[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxLevelEditorPreviewSettings* GetDefaultObj();

};

}



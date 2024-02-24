#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x70 - 0x28)
// Class VirtualHeightfieldMesh.HeightfieldMinMaxTexture
class UHeightfieldMinMaxTexture : public UObject
{
public:
	class UTexture2D*                            Texture;                                           // 0x28(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            LodBiasTexture;                                    // 0x30(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            LodBiasMinMaxTexture;                              // 0x38(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxCPULevels;                                      // 0x40(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_417[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVector2D>                     TextureData;                                       // 0x48(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FIntPoint                             TextureDataSize;                                   // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                TextureDataMips;                                   // 0x60(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UHeightfieldMinMaxTexture* GetDefaultObj();

};

// 0x8 (0x48 - 0x40)
// Class VirtualHeightfieldMesh.MaterialExpressionHeightfieldMinMaxTexture
class UMaterialExpressionHeightfieldMinMaxTexture : public UMaterialExpression
{
public:
	class UHeightfieldMinMaxTexture*             MinMaxTexture;                                     // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMaterialExpressionHeightfieldMinMaxTexture* GetDefaultObj();

};

// 0x8 (0x228 - 0x220)
// Class VirtualHeightfieldMesh.VirtualHeightfieldMesh
class AVirtualHeightfieldMesh : public AActor
{
public:
	class UVirtualHeightfieldMeshComponent*      VirtualHeightfieldMeshComponent;                   // 0x220(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class AVirtualHeightfieldMesh* GetDefaultObj();

};

// 0x80 (0x4D0 - 0x450)
// Class VirtualHeightfieldMesh.VirtualHeightfieldMeshComponent
class UVirtualHeightfieldMeshComponent : public UPrimitiveComponent
{
public:
	TSoftObjectPtr<class ARuntimeVirtualTextureVolume> VirtualTexture;                                    // 0x450(0x28)(Edit, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ARuntimeVirtualTextureVolume*          VirtualTextureRef;                                 // 0x478(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UObject*                               VirtualTextureThumbnail;                           // 0x480(0x8)(Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bCopyBoundsButton;                                 // 0x488(0x1)(Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_460[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UHeightfieldMinMaxTexture*             MinMaxTexture;                                     // 0x490(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        NumMinMaxTextureBuildLevels;                       // 0x498(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bBuildMinMaxTextureButton;                         // 0x49C(0x1)(Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_468[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    Material;                                          // 0x4A0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Lod0ScreenSize;                                    // 0x4A8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Lod0Distribution;                                  // 0x4AC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        LodDistribution;                                   // 0x4B0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        LodBiasScale;                                      // 0x4B4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        NumForceLoadLods;                                  // 0x4B8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        NumOcclusionLods;                                  // 0x4BC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bHiddenInEditor;                                   // 0x4C0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_476[0xF];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UVirtualHeightfieldMeshComponent* GetDefaultObj();

	void GatherHideFlags(bool* InOutHidePrimitivesInEditor, bool* InOutHidePrimitivesInGame);
};

}



#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x2C8 - 0x2A0)
// Class CloudsLighting.CloudsLightingSystem
class ACloudsLightingSystem : public AActor
{
public:
	class UBillboardComponent*                   Billboard;                                         // 0x2A0(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTextureRenderTarget2D*                LightDataMap;                                      // 0x2A8(0x8)(Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMaterialParameterCollection*          LightDataMapParams;                                // 0x2B0(0x8)(Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_167B[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ACloudsLightingSystem* GetDefaultObj();

	bool IsValid();
};

// 0x48 (0x2E8 - 0x2A0)
// Class CloudsLighting.VolumetricLightSource
class AVolumetricLightSource : public AActor
{
public:
	class UMaterialInterface*                    BillboardBaseMaterial;                             // 0x2A0(0x8)(Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTexture2D*                            BillboardTexture;                                  // 0x2A8(0x8)(Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        BillboardSizeX;                                    // 0x2B0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        BillboardSizeY;                                    // 0x2B4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_169C[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          Color;                                             // 0x2C8(0x10)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Intensity;                                         // 0x2D8(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVLightFalloffType                FalloffType;                                       // 0x2DC(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16A5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FalloffMult;                                       // 0x2E0(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsEnabled;                                        // 0x2E4(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16A9[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AVolumetricLightSource* GetDefaultObj();

};

// 0x10 (0x2F8 - 0x2E8)
// Class CloudsLighting.VolumetricPointLight
class AVolumetricPointLight : public AVolumetricLightSource
{
public:
	float                                        SourceRadius;                                      // 0x2E8(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                LineColor;                                         // 0x2EC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        LineThickness;                                     // 0x2F0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_16CC[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AVolumetricPointLight* GetDefaultObj();

};

// 0x18 (0x300 - 0x2E8)
// Class CloudsLighting.VolumetricSpotLight
class AVolumetricSpotLight : public AVolumetricLightSource
{
public:
	float                                        SourceLength;                                      // 0x2E8(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SourceRadius;                                      // 0x2EC(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CutDistance;                                       // 0x2F0(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AngFalloffMult;                                    // 0x2F4(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                LineColor;                                         // 0x2F8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        LineThickness;                                     // 0x2FC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class AVolumetricSpotLight* GetDefaultObj();

};

}



#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class RTXGI.DDGIBlueprintLibrary
class UDDGIBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UDDGIBlueprintLibrary* GetDefaultObj();

	void EnableVolume(class UDDGIVolumeComponent* DDGIVolumeComponent);
	void DisableVolume(class UDDGIVolumeComponent* DDGIVolumeComponent);
	void ClearProbeData(class UDDGIVolumeComponent* DDGIVolumeComponent);
};

// 0x8 (0x228 - 0x220)
// Class RTXGI.DDGIVolume
class ADDGIVolume : public AActor
{
public:
	class UDDGIVolumeComponent*                  DDGIVolumeComponent;                               // 0x220(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ADDGIVolume* GetDefaultObj();

};

// 0x138 (0x330 - 0x1F8)
// Class RTXGI.DDGIVolumeComponent
class UDDGIVolumeComponent : public USceneComponent
{
public:
	uint8                                        Pad_29E[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EDDGIRaysPerProbe                 RaysPerProbe;                                      // 0x200(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A0[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FIntVector                            ProbeCounts;                                       // 0x204(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LightingPriority;                                  // 0x210(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UpdatePriority;                                    // 0x214(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ProbeMaxRayDistance;                               // 0x218(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ProbeHysteresis;                                   // 0x21C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ViewBias;                                          // 0x220(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NormalBias;                                        // 0x224(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLightingChannels                     LightingChannels;                                  // 0x228(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AF[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        VolumeBlendDistance;                               // 0x22C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VolumeBlendDistanceBlack;                          // 0x230(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         EnableProbeRelocation;                             // 0x234(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         EnableProbeScrolling;                              // 0x235(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         EnableVolume;                                      // 0x236(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         RuntimeStatic;                                     // 0x237(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ProbeDistanceExponent;                             // 0x238(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ProbeIrradianceEncodingGamma;                      // 0x23C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ProbeChangeThreshold;                              // 0x240(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ProbeBrightnessThreshold;                          // 0x244(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ProbeMinFrontfaceDistance;                         // 0x248(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ProbeBackfaceThreshold;                            // 0x24C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LightMultiplier;                                   // 0x250(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EmissiveMultiplier;                                // 0x254(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        IrradianceScalar;                                  // 0x258(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SkyLight;                                          // 0x25C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C0[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               LastOrigin;                                        // 0x260(0xC)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FIntVector                            ProbeScrollOffset;                                 // 0x26C(0xC)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C3[0xB8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDDGIVolumeComponent* GetDefaultObj();

	void DDGIClearVolumes();
};

// 0x10 (0x48 - 0x38)
// Class RTXGI.RTXGIPluginSettings
class URTXGIPluginSettings : public UDeveloperSettings
{
public:
	enum class EDDGIIrradianceBits               IrradianceBits;                                    // 0x38(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDDGIDistanceBits                 DistanceBits;                                      // 0x39(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2DD[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DebugProbeRadius;                                  // 0x3C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ProbeUpdateRayBudget;                              // 0x40(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E0[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class URTXGIPluginSettings* GetDefaultObj();

};

}



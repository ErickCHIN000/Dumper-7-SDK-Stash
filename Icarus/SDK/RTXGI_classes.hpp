#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x228 - 0x220)
// Class RTXGI.DDGIVolume
class ADDGIVolume : public AActor
{
public:
	class UDDGIVolumeComponent*                  DDGIVolumeComponent;                               // 0x220(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ADDGIVolume* GetDefaultObj();

};

// 0x158 (0x350 - 0x1F8)
// Class RTXGI.DDGIVolumeComponent
class UDDGIVolumeComponent : public USceneComponent
{
public:
	uint8                                        Pad_763[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         EnableVolume;                                      // 0x200(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_768[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        UpdatePriority;                                    // 0x204(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LightingPriority;                                  // 0x208(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BlendingDistance;                                  // 0x20C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BlendingCutoffDistance;                            // 0x210(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         RuntimeStatic;                                     // 0x214(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_773[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               LastOrigin;                                        // 0x218(0xC)(Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDDGIRaysPerProbe                 RaysPerProbe;                                      // 0x224(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FIntVector                            ProbeCounts;                                       // 0x228(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ProbeMaxRayDistance;                               // 0x234(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ProbeHistoryWeight;                                // 0x238(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FProbeRelocation                      ProbeRelocation;                                   // 0x23C(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ScrollProbesInfinitely;                            // 0x248(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         VisualizeProbes;                                   // 0x249(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_784[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FIntVector                            ProbeScrollOffset;                                 // 0x24C(0xC)(Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ProbeDistanceExponent;                             // 0x258(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ProbeIrradianceEncodingGamma;                      // 0x25C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ProbeChangeThreshold;                              // 0x260(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ProbeBrightnessThreshold;                          // 0x264(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDDGISkyLightType                 SkyLightTypeOnRayMiss;                             // 0x268(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ViewBias;                                          // 0x26C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NormalBias;                                        // 0x270(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LightMultiplier;                                   // 0x274(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EmissiveMultiplier;                                // 0x278(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        IrradianceScalar;                                  // 0x27C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLightingChannels                     LightingChannels;                                  // 0x280(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_7A1[0xCF];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDDGIVolumeComponent* GetDefaultObj();

	void ToggleVolume(bool IsVolumeEnabled);
	void SetProbesVisualization(bool IsProbesVisualized);
	void SetLightMultiplier(float NewLightMultiplier);
	void SetIrradianceScalar(float NewIrradianceScalar);
	void SetEmissiveMultiplier(float NewEmissiveMultiplier);
	float GetLightMultiplier();
	float GetIrradianceScalar();
	float GetEmissiveMultiplier();
	void DDGIClearVolumes();
	void ClearProbeData();
};

// 0x18 (0x50 - 0x38)
// Class RTXGI.RTXGIPluginSettings
class URTXGIPluginSettings : public UDeveloperSettings
{
public:
	enum class EDDGIIrradianceBits               IrradianceBits;                                    // 0x38(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDDGIDistanceBits                 DistanceBits;                                      // 0x39(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7CC[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DebugProbeRadius;                                  // 0x3C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ProbeUpdateRayBudget;                              // 0x40(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDDGIProbesVisulizationMode       ProbesVisualization;                               // 0x44(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7D6[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ProbesDepthScale;                                  // 0x48(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SerializeProbes;                                   // 0x4C(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7D8[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class URTXGIPluginSettings* GetDefaultObj();

};

}



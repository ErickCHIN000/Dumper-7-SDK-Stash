#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class MagicLeapAR.LuminARSessionFunctionLibrary
class ULuminARSessionFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class ULuminARSessionFunctionLibrary* GetDefaultObj();

	void StartLuminARSession(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class ULuminARSessionConfig* Configuration);
};

// 0x0 (0x28 - 0x28)
// Class MagicLeapAR.LuminARFrameFunctionLibrary
class ULuminARFrameFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class ULuminARFrameFunctionLibrary* GetDefaultObj();

	bool LuminARLineTrace(class UObject* WorldContextObject, struct FVector2D& ScreenPosition, TSet<enum class ELuminARLineTraceChannel> TraceChannels, TArray<struct FARTraceResult>* OutHitResults);
	enum class ELuminARTrackingState GetTrackingState();
};

// 0x0 (0x28 - 0x28)
// Class MagicLeapAR.LuminARImageTrackingFunctionLibrary
class ULuminARImageTrackingFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class ULuminARImageTrackingFunctionLibrary* GetDefaultObj();

	class ULuminARCandidateImage* AddLuminRuntimeCandidateImage(class UARSessionConfig* SessionConfig, class UTexture2D* CandidateTexture, const class FString& FriendlyName, float PhysicalWidth, bool bUseUnreliablePose, bool bImageIsStationary);
};

// 0x98 (0x140 - 0xA8)
// Class MagicLeapAR.LuminARSessionConfig
class ULuminARSessionConfig : public UARSessionConfig
{
public:
	uint8                                        Pad_2B5[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMagicLeapPlanesQuery                 PlanesQuery;                                       // 0xB0(0x60)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	int32                                        MaxPlaneQueryResults;                              // 0x110(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinPlaneArea;                                      // 0x114(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bArbitraryOrientationPlaneDetection;               // 0x118(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2BE[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               PlaneSearchExtents;                                // 0x11C(0xC)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<enum class EMagicLeapPlaneQueryFlags> PlaneQueryFlags;                                   // 0x128(0x10)(ZeroConstructor, Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDiscardZeroExtentPlanes;                          // 0x138(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDefaultUseUnreliablePose;                         // 0x139(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C3[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULuminARSessionConfig* GetDefaultObj();

};

// 0x10 (0x50 - 0x40)
// Class MagicLeapAR.LuminARLightEstimate
class ULuminARLightEstimate : public UARBasicLightEstimate
{
public:
	TArray<float>                                AmbientIntensityNits;                              // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class ULuminARLightEstimate* GetDefaultObj();

	TArray<float> GetAmbientIntensityNits();
};

// 0x8 (0x60 - 0x58)
// Class MagicLeapAR.LuminARCandidateImage
class ULuminARCandidateImage : public UARCandidateImage
{
public:
	bool                                         bUseUnreliablePose;                                // 0x58(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bImageIsStationary;                                // 0x59(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2F8[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULuminARCandidateImage* GetDefaultObj();

	bool GetUseUnreliablePose();
	bool GetImageIsStationary();
};

}



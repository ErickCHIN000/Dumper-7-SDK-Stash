#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0xB0 - 0xA0)
// BlueprintGeneratedClass BP_LightIntensity.BP_LightIntensity_C
class UBP_LightIntensity_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	double                                       StreetLightIntensity;                              // 0xA8(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_LightIntensity_C* GetDefaultObj();

	void SetStreetLightIntensity(double Intensity);
	void GetStreetLightIntensity(double* Intensity);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_LightIntensity(int32 EntryPoint);
};

}



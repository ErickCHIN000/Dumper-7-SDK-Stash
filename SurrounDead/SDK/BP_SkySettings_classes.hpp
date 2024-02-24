#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x2A8 - 0x298)
// BlueprintGeneratedClass BP_SkySettings.BP_SkySettings_C
class ABP_SkySettings_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x298(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_SkySettings_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void Saturation(float NewValue);
	void NightBright(float NewValue);
	void NightLength(float NewValue);
	void DayLength(float NewValue);
	void ExecuteUbergraph_BP_SkySettings(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class AUltra_Dynamic_Sky_C* CallFunc_GetUDS_UDS, float K2Node_CustomEvent_NewValue_3, class AUltra_Dynamic_Sky_C* CallFunc_GetUDS_UDS_1, class AUltra_Dynamic_Sky_C* CallFunc_GetUDS_UDS_2, float K2Node_CustomEvent_NewValue_2, class AUltra_Dynamic_Sky_C* CallFunc_GetUDS_UDS_3, float K2Node_CustomEvent_NewValue_1, float K2Node_CustomEvent_NewValue, double K2Node_VariableSet_Saturation_ImplicitCast, double K2Node_VariableSet_Night_Brightness_ImplicitCast, double K2Node_VariableSet_Night_Length_ImplicitCast, double K2Node_VariableSet_Day_Length_ImplicitCast);
};

}



#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0xC20 - 0xC00)
// BlueprintGeneratedClass TEDProjectile_TheHost.TEDProjectile_TheHost_C
class ATEDProjectile_TheHost_C : public ATEDProjectile_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xC00(0x8)(Transient, DuplicateTransient)
	struct FDataTableValueHandle                 ShieldHealMultiHandle;                             // 0xC08(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class ATEDProjectile_TheHost_C* GetDefaultObj();

	void UserConstructionScript();
	void OnHitEnemy(struct FHitResult& Hit);
	void ExecuteUbergraph_TEDProjectile_TheHost(int32 EntryPoint, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, const struct FHitResult& K2Node_Event_Hit, class APawn* CallFunc_GetInstigator_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1, int32 CallFunc_Max_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FLightProjectileInitializationData& K2Node_MakeStruct_LightProjectileInitializationData);
};

}



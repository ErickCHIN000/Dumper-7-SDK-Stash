#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x7D0 - 0x7B0)
// BlueprintGeneratedClass BP_Brazier.BP_Brazier_C
class ABP_Brazier_C : public ABP_Light_Fire_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x7B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_IcarusPointLight_C*                BP_IcarusPointLight_Large;                         // 0x7B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                  PointLight_SmallBounce;                            // 0x7C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     Niagara_Brazier;                                   // 0x7C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Brazier_C* GetDefaultObj();

	void GetWidgetClass(class UClass** Widget);
	void GeneratorStateUpdate(bool Active, class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable_1, bool Temp_bool_Variable, float CallFunc_RandomFloat_ReturnValue, class UMaterialInterface* K2Node_Select_Default, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
	void Snow(float Intensity);
	void DeactivateCampfire();
	void Rain(int32 Millilitres);
	void ExecuteUbergraph_BP_Brazier(int32 EntryPoint, enum class EValid CallFunc_GetTrait_Paths, class UGeneratorComponent* CallFunc_GetTrait_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, float K2Node_Event_Intensity, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsSheltered_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 K2Node_Event_Millilitres, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
};

}



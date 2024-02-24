#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Interactable_Plant_CropPlot.BP_Interactable_Plant_CropPlot_C
// (None)

class UClass* UBP_Interactable_Plant_CropPlot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Interactable_Plant_CropPlot_C");

	return Clss;
}


// BP_Interactable_Plant_CropPlot_C BP_Interactable_Plant_CropPlot.Default__BP_Interactable_Plant_CropPlot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Interactable_Plant_CropPlot_C* UBP_Interactable_Plant_CropPlot_C::GetDefaultObj()
{
	static class UBP_Interactable_Plant_CropPlot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Interactable_Plant_CropPlot_C*>(UBP_Interactable_Plant_CropPlot_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Interactable_Plant_CropPlot.BP_Interactable_Plant_CropPlot_C.CanInteract
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Instigator                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  HitResult                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class ABP_IcarusPlayerCharacterSurvival_C*K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ItemMatchesQuery_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsFunctional_bFunctional                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_Crop_Plot_Base_C*        K2Node_DynamicCast_AsBP_Crop_Plot_Base                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanPlantSeed_CanPlant                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBP_Interactable_Plant_CropPlot_C::CanInteract(class AActor* Instigator, const struct FHitResult& HitResult, class ABP_IcarusPlayerCharacterSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_ItemMatchesQuery_ReturnValue, bool CallFunc_IsFunctional_bFunctional, bool CallFunc_IsValid_ReturnValue_1, class ABP_Crop_Plot_Base_C* K2Node_DynamicCast_AsBP_Crop_Plot_Base, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_CanPlantSeed_CanPlant)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Interactable_Plant_CropPlot_C", "CanInteract");

	Params::UBP_Interactable_Plant_CropPlot_C_CanInteract_Params Parms{};

	Parms.Instigator = Instigator;
	Parms.HitResult = HitResult;
	Parms.K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival = K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_ItemMatchesQuery_ReturnValue = CallFunc_ItemMatchesQuery_ReturnValue;
	Parms.CallFunc_IsFunctional_bFunctional = CallFunc_IsFunctional_bFunctional;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_Crop_Plot_Base = K2Node_DynamicCast_AsBP_Crop_Plot_Base;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_CanPlantSeed_CanPlant = CallFunc_CanPlantSeed_CanPlant;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Interactable_Plant_CropPlot.BP_Interactable_Plant_CropPlot_C.Interact
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                      Instigator                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  HitResult                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void UBP_Interactable_Plant_CropPlot_C::Interact(class AActor* Instigator, struct FHitResult& HitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Interactable_Plant_CropPlot_C", "Interact");

	Params::UBP_Interactable_Plant_CropPlot_C_Interact_Params Parms{};

	Parms.Instigator = Instigator;
	Parms.HitResult = HitResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Interactable_Plant_CropPlot.BP_Interactable_Plant_CropPlot_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_Interactable_Plant_CropPlot_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Interactable_Plant_CropPlot_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Interactable_Plant_CropPlot.BP_Interactable_Plant_CropPlot_C.ExecuteUbergraph_BP_Interactable_Plant_CropPlot
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESetDataSuccess         CallFunc_SetItemPropertyValue_Paths                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Instigator                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_Event_HitResult                                           (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusPlayerCharacter*      K2Node_DynamicCast_AsIcarus_Player_Character                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ConsumeFocusedItem_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_DeployableBase_C*        K2Node_DynamicCast_AsBP_Deployable_Base                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EDataValidity           CallFunc_GetFocusedItemData_Validity                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   CallFunc_GetFocusedItemData_ReturnValue                          (ContainsInstancedReference)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_Crop_Plot_Base_C*        K2Node_DynamicCast_AsBP_Crop_Plot_Base                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_PlantSeed_Planted                                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_Interactable_Plant_CropPlot_C::ExecuteUbergraph_BP_Interactable_Plant_CropPlot(int32 EntryPoint, enum class ESetDataSuccess CallFunc_SetItemPropertyValue_Paths, class AActor* K2Node_Event_Instigator, const struct FHitResult& K2Node_Event_HitResult, bool K2Node_SwitchEnum_CmpSuccess, class AIcarusPlayerCharacter* K2Node_DynamicCast_AsIcarus_Player_Character, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_ConsumeFocusedItem_ReturnValue, class ABP_DeployableBase_C* K2Node_DynamicCast_AsBP_Deployable_Base, bool K2Node_DynamicCast_bSuccess_1, enum class EDataValidity CallFunc_GetFocusedItemData_Validity, const struct FItemData& CallFunc_GetFocusedItemData_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, class ABP_Crop_Plot_Base_C* K2Node_DynamicCast_AsBP_Crop_Plot_Base, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_PlantSeed_Planted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Interactable_Plant_CropPlot_C", "ExecuteUbergraph_BP_Interactable_Plant_CropPlot");

	Params::UBP_Interactable_Plant_CropPlot_C_ExecuteUbergraph_BP_Interactable_Plant_CropPlot_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_SetItemPropertyValue_Paths = CallFunc_SetItemPropertyValue_Paths;
	Parms.K2Node_Event_Instigator = K2Node_Event_Instigator;
	Parms.K2Node_Event_HitResult = K2Node_Event_HitResult;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_DynamicCast_AsIcarus_Player_Character = K2Node_DynamicCast_AsIcarus_Player_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_ConsumeFocusedItem_ReturnValue = CallFunc_ConsumeFocusedItem_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Deployable_Base = K2Node_DynamicCast_AsBP_Deployable_Base;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetFocusedItemData_Validity = CallFunc_GetFocusedItemData_Validity;
	Parms.CallFunc_GetFocusedItemData_ReturnValue = CallFunc_GetFocusedItemData_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.K2Node_DynamicCast_AsBP_Crop_Plot_Base = K2Node_DynamicCast_AsBP_Crop_Plot_Base;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_PlantSeed_Planted = CallFunc_PlantSeed_Planted;

	UObject::ProcessEvent(Func, &Parms);

}

}



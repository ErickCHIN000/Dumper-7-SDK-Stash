#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LiquidContainerBase.BP_LiquidContainerBase_C
// (Actor)

class UClass* ABP_LiquidContainerBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LiquidContainerBase_C");

	return Clss;
}


// BP_LiquidContainerBase_C BP_LiquidContainerBase.Default__BP_LiquidContainerBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LiquidContainerBase_C* ABP_LiquidContainerBase_C::GetDefaultObj()
{
	static class ABP_LiquidContainerBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LiquidContainerBase_C*>(ABP_LiquidContainerBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_LiquidContainerBase.BP_LiquidContainerBase_C.Deployable_Interact
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Interactor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LiquidContainerBase_C::Deployable_Interact(class AActor* Interactor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LiquidContainerBase_C", "Deployable_Interact");

	Params::ABP_LiquidContainerBase_C_Deployable_Interact_Params Parms{};

	Parms.Interactor = Interactor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LiquidContainerBase.BP_LiquidContainerBase_C.UpdateFillableTypeText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EIcarusResourceType     CallFunc_GetFillableType_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void ABP_LiquidContainerBase_C::UpdateFillableTypeText(bool CallFunc_IsValid_ReturnValue, enum class EIcarusResourceType CallFunc_GetFillableType_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LiquidContainerBase_C", "UpdateFillableTypeText");

	Params::ABP_LiquidContainerBase_C_UpdateFillableTypeText_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetFillableType_ReturnValue = CallFunc_GetFillableType_ReturnValue;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LiquidContainerBase.BP_LiquidContainerBase_C.UpdateCapacityText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_GetStoredUnits_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFillableData               CallFunc_GetFillableData_FillableData                            (None)
// enum class EDataValid              CallFunc_GetFillableData_Paths                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_1                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void ABP_LiquidContainerBase_C::UpdateCapacityText(int32 CallFunc_GetStoredUnits_ReturnValue, const struct FFillableData& CallFunc_GetFillableData_FillableData, enum class EDataValid CallFunc_GetFillableData_Paths, const class FString& CallFunc_Conv_IntToString_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LiquidContainerBase_C", "UpdateCapacityText");

	Params::ABP_LiquidContainerBase_C_UpdateCapacityText_Params Parms{};

	Parms.CallFunc_GetStoredUnits_ReturnValue = CallFunc_GetStoredUnits_ReturnValue;
	Parms.CallFunc_GetFillableData_FillableData = CallFunc_GetFillableData_FillableData;
	Parms.CallFunc_GetFillableData_Paths = CallFunc_GetFillableData_Paths;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue_1 = CallFunc_Conv_IntToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LiquidContainerBase.BP_LiquidContainerBase_C.Interact
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Instigator                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              HeldItemMaxCapacity                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              HeldItemCapacity                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFillableComponent*          HeldItemFillable                                                 (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemDynamicData            DynamicData                                                      (Edit, BlueprintVisible)
// struct FFillableData               FillableData                                                     (Edit, BlueprintVisible)
// struct FItemData                   HeldItemData                                                     (Edit, BlueprintVisible, ContainsInstancedReference)
// class ABP_IcarusPlayerCharacterSurvival_C*Player                                                           (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_IcarusPlayerCharacterSurvival_C*K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFillableComponent*          CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EIcarusResourceType     CallFunc_GetFillableType_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsEmpty_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsFull_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_FillableSupports_Supports                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetStoredUnits_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EIcarusResourceType     CallFunc_GetFillableType_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_AddUnits_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetStoredUnits_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFillableData               CallFunc_GetFillableData_OutData                                 (None)
// bool                               CallFunc_GetFillableData_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsEmpty_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_RemoveUnits_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsFull_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsFull_ReturnValue_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_AddUnits_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RemoveUnits_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LiquidContainerBase_C::Interact(class AActor* Instigator, int32 HeldItemMaxCapacity, int32 HeldItemCapacity, class UFillableComponent* HeldItemFillable, const struct FItemDynamicData& DynamicData, const struct FFillableData& FillableData, const struct FItemData& HeldItemData, class ABP_IcarusPlayerCharacterSurvival_C* Player, class ABP_IcarusPlayerCharacterSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UFillableComponent* CallFunc_GetComponentByClass_ReturnValue, enum class EIcarusResourceType CallFunc_GetFillableType_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, bool CallFunc_IsEmpty_ReturnValue_1, bool CallFunc_IsFull_ReturnValue, bool CallFunc_FillableSupports_Supports, int32 CallFunc_GetStoredUnits_ReturnValue, enum class EIcarusResourceType CallFunc_GetFillableType_ReturnValue_1, int32 CallFunc_AddUnits_ReturnValue, int32 CallFunc_GetStoredUnits_ReturnValue_1, const struct FFillableData& CallFunc_GetFillableData_OutData, bool CallFunc_GetFillableData_ReturnValue, bool CallFunc_IsEmpty_ReturnValue_2, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_RemoveUnits_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsFull_ReturnValue_1, bool CallFunc_IsFull_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, int32 CallFunc_AddUnits_ReturnValue_1, int32 CallFunc_RemoveUnits_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LiquidContainerBase_C", "Interact");

	Params::ABP_LiquidContainerBase_C_Interact_Params Parms{};

	Parms.Instigator = Instigator;
	Parms.HeldItemMaxCapacity = HeldItemMaxCapacity;
	Parms.HeldItemCapacity = HeldItemCapacity;
	Parms.HeldItemFillable = HeldItemFillable;
	Parms.DynamicData = DynamicData;
	Parms.FillableData = FillableData;
	Parms.HeldItemData = HeldItemData;
	Parms.Player = Player;
	Parms.K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival = K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetFillableType_ReturnValue = CallFunc_GetFillableType_ReturnValue;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.CallFunc_IsEmpty_ReturnValue_1 = CallFunc_IsEmpty_ReturnValue_1;
	Parms.CallFunc_IsFull_ReturnValue = CallFunc_IsFull_ReturnValue;
	Parms.CallFunc_FillableSupports_Supports = CallFunc_FillableSupports_Supports;
	Parms.CallFunc_GetStoredUnits_ReturnValue = CallFunc_GetStoredUnits_ReturnValue;
	Parms.CallFunc_GetFillableType_ReturnValue_1 = CallFunc_GetFillableType_ReturnValue_1;
	Parms.CallFunc_AddUnits_ReturnValue = CallFunc_AddUnits_ReturnValue;
	Parms.CallFunc_GetStoredUnits_ReturnValue_1 = CallFunc_GetStoredUnits_ReturnValue_1;
	Parms.CallFunc_GetFillableData_OutData = CallFunc_GetFillableData_OutData;
	Parms.CallFunc_GetFillableData_ReturnValue = CallFunc_GetFillableData_ReturnValue;
	Parms.CallFunc_IsEmpty_ReturnValue_2 = CallFunc_IsEmpty_ReturnValue_2;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_RemoveUnits_ReturnValue = CallFunc_RemoveUnits_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsFull_ReturnValue_1 = CallFunc_IsFull_ReturnValue_1;
	Parms.CallFunc_IsFull_ReturnValue_2 = CallFunc_IsFull_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_AddUnits_ReturnValue_1 = CallFunc_AddUnits_ReturnValue_1;
	Parms.CallFunc_RemoveUnits_ReturnValue_1 = CallFunc_RemoveUnits_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LiquidContainerBase.BP_LiquidContainerBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_LiquidContainerBase_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LiquidContainerBase_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_LiquidContainerBase.BP_LiquidContainerBase_C.UpdateDebugText
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_LiquidContainerBase_C::UpdateDebugText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LiquidContainerBase_C", "UpdateDebugText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_LiquidContainerBase.BP_LiquidContainerBase_C.ExecuteUbergraph_BP_LiquidContainerBase
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EValid                  CallFunc_GetTrait_Paths                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFillableComponent*          CallFunc_GetTrait_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_LiquidContainerBase_C::ExecuteUbergraph_BP_LiquidContainerBase(int32 EntryPoint, bool CallFunc_IsServer_ReturnValue, enum class EValid CallFunc_GetTrait_Paths, class UFillableComponent* CallFunc_GetTrait_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LiquidContainerBase_C", "ExecuteUbergraph_BP_LiquidContainerBase");

	Params::ABP_LiquidContainerBase_C_ExecuteUbergraph_BP_LiquidContainerBase_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_GetTrait_Paths = CallFunc_GetTrait_Paths;
	Parms.CallFunc_GetTrait_ReturnValue = CallFunc_GetTrait_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}



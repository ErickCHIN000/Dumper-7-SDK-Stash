#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_GOAP_Corpse_Mount.BP_GOAP_Corpse_Mount_C
// (Actor)

class UClass* ABP_GOAP_Corpse_Mount_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_GOAP_Corpse_Mount_C");

	return Clss;
}


// BP_GOAP_Corpse_Mount_C BP_GOAP_Corpse_Mount.Default__BP_GOAP_Corpse_Mount_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_GOAP_Corpse_Mount_C* ABP_GOAP_Corpse_Mount_C::GetDefaultObj()
{
	static class ABP_GOAP_Corpse_Mount_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_GOAP_Corpse_Mount_C*>(ABP_GOAP_Corpse_Mount_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_GOAP_Corpse_Mount.BP_GOAP_Corpse_Mount_C.SetupMountCorpse
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FItemData>           Items                                                            (Edit, BlueprintVisible, ContainsInstancedReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusGameModeSurvival*     K2Node_DynamicCast_AsIcarus_Game_Mode_Survival                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusNPCCharacter*         K2Node_DynamicCast_AsIcarus_NPCCharacter                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UInventoryComponent*         CallFunc_GetInventoryComponent_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventory*                  CallFunc_GetInventory_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventory*                  CallFunc_GetInventory_ReturnValue_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventory*                  CallFunc_GetInventory_ReturnValue_2                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UInventory*>          K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventory*                  CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemData                   CallFunc_GetItem_ReturnValue                                     (ContainsInstancedReference)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDataValid              CallFunc_ItemDataValid_Paths                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_GOAP_Corpse_Mount_C::SetupMountCorpse(const TArray<struct FItemData>& Items, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FTransform& CallFunc_GetTransform_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class AIcarusGameModeSurvival* K2Node_DynamicCast_AsIcarus_Game_Mode_Survival, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Array_IsValidIndex_ReturnValue, class AIcarusNPCCharacter* K2Node_DynamicCast_AsIcarus_NPCCharacter, bool K2Node_DynamicCast_bSuccess_1, class UInventoryComponent* CallFunc_GetInventoryComponent_ReturnValue, class UInventory* CallFunc_GetInventory_ReturnValue, class UInventory* CallFunc_GetInventory_ReturnValue_1, class UInventory* CallFunc_GetInventory_ReturnValue_2, TArray<class UInventory*>& K2Node_MakeArray_Array, int32 CallFunc_Array_Length_ReturnValue, class UInventory* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FItemData& CallFunc_GetItem_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, enum class EDataValid CallFunc_ItemDataValid_Paths, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GOAP_Corpse_Mount_C", "SetupMountCorpse");

	Params::ABP_GOAP_Corpse_Mount_C_SetupMountCorpse_Params Parms{};

	Parms.Items = Items;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcarus_Game_Mode_Survival = K2Node_DynamicCast_AsIcarus_Game_Mode_Survival;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcarus_NPCCharacter = K2Node_DynamicCast_AsIcarus_NPCCharacter;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetInventoryComponent_ReturnValue = CallFunc_GetInventoryComponent_ReturnValue;
	Parms.CallFunc_GetInventory_ReturnValue = CallFunc_GetInventory_ReturnValue;
	Parms.CallFunc_GetInventory_ReturnValue_1 = CallFunc_GetInventory_ReturnValue_1;
	Parms.CallFunc_GetInventory_ReturnValue_2 = CallFunc_GetInventory_ReturnValue_2;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetItem_ReturnValue = CallFunc_GetItem_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_ItemDataValid_Paths = CallFunc_ItemDataValid_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_GOAP_Corpse_Mount.BP_GOAP_Corpse_Mount_C.IcarusBeginPlay
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:

void ABP_GOAP_Corpse_Mount_C::IcarusBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GOAP_Corpse_Mount_C", "IcarusBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_GOAP_Corpse_Mount.BP_GOAP_Corpse_Mount_C.OnItemRemovedVerbose
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventory*                  Inventory                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   Item                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void ABP_GOAP_Corpse_Mount_C::OnItemRemovedVerbose(class UInventory* Inventory, int32 Location, struct FItemData& Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GOAP_Corpse_Mount_C", "OnItemRemovedVerbose");

	Params::ABP_GOAP_Corpse_Mount_C_OnItemRemovedVerbose_Params Parms{};

	Parms.Inventory = Inventory;
	Parms.Location = Location;
	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_GOAP_Corpse_Mount.BP_GOAP_Corpse_Mount_C.ExecuteUbergraph_BP_GOAP_Corpse_Mount
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventory*                  K2Node_Event_Inventory                                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_Location                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   K2Node_Event_Item                                                (ConstParm, ContainsInstancedReference)

void ABP_GOAP_Corpse_Mount_C::ExecuteUbergraph_BP_GOAP_Corpse_Mount(int32 EntryPoint, class UInventory* K2Node_Event_Inventory, int32 K2Node_Event_Location, const struct FItemData& K2Node_Event_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GOAP_Corpse_Mount_C", "ExecuteUbergraph_BP_GOAP_Corpse_Mount");

	Params::ABP_GOAP_Corpse_Mount_C_ExecuteUbergraph_BP_GOAP_Corpse_Mount_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Inventory = K2Node_Event_Inventory;
	Parms.K2Node_Event_Location = K2Node_Event_Location;
	Parms.K2Node_Event_Item = K2Node_Event_Item;

	UObject::ProcessEvent(Func, &Parms);

}

}



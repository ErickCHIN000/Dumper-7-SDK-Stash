#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_WeatherController.BP_WeatherController_C
// (Actor)

class UClass* ABP_WeatherController_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_WeatherController_C");

	return Clss;
}


// BP_WeatherController_C BP_WeatherController.Default__BP_WeatherController_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_WeatherController_C* ABP_WeatherController_C::GetDefaultObj()
{
	static class ABP_WeatherController_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_WeatherController_C*>(ABP_WeatherController_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_WeatherController.BP_WeatherController_C.DamageToPlayerFocusedItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBiomesRowHandle            Biome                                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// int32                              Intensity                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EIcarusDamageType       DamageType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerCharacter*      TargetActor                                                      (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CanDamage                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UInventory*                  CallFunc_GetFocusedItemInventoryAndSlot_FocusedItemInventory     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetFocusedItemInventoryAndSlot_FocusedItemSlot          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDataValidity           CallFunc_GetFocusedItemInventoryAndSlot_Validity                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DealDamageToInventoryItem_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UConnectedPlayers*           CallFunc_GetConnectedPlayers_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FConnectedPlayer>    CallFunc_GetInitialisedConnectedPlayers_ReturnValue              (ConstParm, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FConnectedPlayer            CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EValid                  CallFunc_GetTrait_Paths                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UShelteredComponent*         CallFunc_GetTrait_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSheltered_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_FBiomesRowHandleFBiomesRowHandle_ReturnValue (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_WeatherController_C::DamageToPlayerFocusedItem(const struct FBiomesRowHandle& Biome, int32 Intensity, enum class EIcarusDamageType DamageType, class AIcarusPlayerCharacter* TargetActor, bool CanDamage, bool CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UInventory* CallFunc_GetFocusedItemInventoryAndSlot_FocusedItemInventory, int32 CallFunc_GetFocusedItemInventoryAndSlot_FocusedItemSlot, enum class EDataValidity CallFunc_GetFocusedItemInventoryAndSlot_Validity, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_DealDamageToInventoryItem_ReturnValue, class UConnectedPlayers* CallFunc_GetConnectedPlayers_ReturnValue, TArray<struct FConnectedPlayer>& CallFunc_GetInitialisedConnectedPlayers_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FConnectedPlayer& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, enum class EValid CallFunc_GetTrait_Paths, class UShelteredComponent* CallFunc_GetTrait_ReturnValue, bool CallFunc_IsSheltered_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_FBiomesRowHandleFBiomesRowHandle_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeatherController_C", "DamageToPlayerFocusedItem");

	Params::ABP_WeatherController_C_DamageToPlayerFocusedItem_Params Parms{};

	Parms.Biome = Biome;
	Parms.Intensity = Intensity;
	Parms.DamageType = DamageType;
	Parms.TargetActor = TargetActor;
	Parms.CanDamage = CanDamage;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetFocusedItemInventoryAndSlot_FocusedItemInventory = CallFunc_GetFocusedItemInventoryAndSlot_FocusedItemInventory;
	Parms.CallFunc_GetFocusedItemInventoryAndSlot_FocusedItemSlot = CallFunc_GetFocusedItemInventoryAndSlot_FocusedItemSlot;
	Parms.CallFunc_GetFocusedItemInventoryAndSlot_Validity = CallFunc_GetFocusedItemInventoryAndSlot_Validity;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_DealDamageToInventoryItem_ReturnValue = CallFunc_DealDamageToInventoryItem_ReturnValue;
	Parms.CallFunc_GetConnectedPlayers_ReturnValue = CallFunc_GetConnectedPlayers_ReturnValue;
	Parms.CallFunc_GetInitialisedConnectedPlayers_ReturnValue = CallFunc_GetInitialisedConnectedPlayers_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetTrait_Paths = CallFunc_GetTrait_Paths;
	Parms.CallFunc_GetTrait_ReturnValue = CallFunc_GetTrait_ReturnValue;
	Parms.CallFunc_IsSheltered_ReturnValue = CallFunc_IsSheltered_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_EqualEqual_FBiomesRowHandleFBiomesRowHandle_ReturnValue = CallFunc_EqualEqual_FBiomesRowHandleFBiomesRowHandle_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WeatherController.BP_WeatherController_C.DamageTaggedPlayerItems
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBiomesRowHandle            Biome                                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// int32                              Intensity                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTagQueriesRowHandle        TagQueryRow                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// enum class EIcarusDamageType       DamageType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryIDEnum            InventoryID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class AIcarusPlayerCharacter*      TargetActor                                                      (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CanDamage                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UConnectedPlayers*           CallFunc_GetConnectedPlayers_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FConnectedPlayer>    CallFunc_GetInitialisedConnectedPlayers_ReturnValue              (ConstParm, ReferenceParm)
// struct FTagQueries                 CallFunc_GetTagQueriesStruct_TagQueries                          (None)
// enum class EValid                  CallFunc_GetTagQueriesStruct_Paths                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FConnectedPlayer            CallFunc_Array_Get_Item                                          (None)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EValid                  CallFunc_GetTrait_Paths                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UShelteredComponent*         CallFunc_GetTrait_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSheltered_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_FBiomesRowHandleFBiomesRowHandle_ReturnValue (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EValid                  CallFunc_GetTrait_Paths_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponent*         CallFunc_GetTrait_ReturnValue_1                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UInventory*                  CallFunc_GetInventory_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DealDamageToInventoryItems_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_WeatherController_C::DamageTaggedPlayerItems(const struct FBiomesRowHandle& Biome, int32 Intensity, const struct FTagQueriesRowHandle& TagQueryRow, enum class EIcarusDamageType DamageType, const struct FInventoryIDEnum& InventoryID, class AIcarusPlayerCharacter* TargetActor, bool CanDamage, bool CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UConnectedPlayers* CallFunc_GetConnectedPlayers_ReturnValue, TArray<struct FConnectedPlayer>& CallFunc_GetInitialisedConnectedPlayers_ReturnValue, const struct FTagQueries& CallFunc_GetTagQueriesStruct_TagQueries, enum class EValid CallFunc_GetTagQueriesStruct_Paths, const struct FConnectedPlayer& CallFunc_Array_Get_Item, bool K2Node_SwitchEnum_CmpSuccess, enum class EValid CallFunc_GetTrait_Paths, class UShelteredComponent* CallFunc_GetTrait_ReturnValue, bool CallFunc_IsSheltered_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_FBiomesRowHandleFBiomesRowHandle_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class EValid CallFunc_GetTrait_Paths_1, class UInventoryComponent* CallFunc_GetTrait_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_2, class UInventory* CallFunc_GetInventory_ReturnValue, bool CallFunc_DealDamageToInventoryItems_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeatherController_C", "DamageTaggedPlayerItems");

	Params::ABP_WeatherController_C_DamageTaggedPlayerItems_Params Parms{};

	Parms.Biome = Biome;
	Parms.Intensity = Intensity;
	Parms.TagQueryRow = TagQueryRow;
	Parms.DamageType = DamageType;
	Parms.InventoryID = InventoryID;
	Parms.TargetActor = TargetActor;
	Parms.CanDamage = CanDamage;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetConnectedPlayers_ReturnValue = CallFunc_GetConnectedPlayers_ReturnValue;
	Parms.CallFunc_GetInitialisedConnectedPlayers_ReturnValue = CallFunc_GetInitialisedConnectedPlayers_ReturnValue;
	Parms.CallFunc_GetTagQueriesStruct_TagQueries = CallFunc_GetTagQueriesStruct_TagQueries;
	Parms.CallFunc_GetTagQueriesStruct_Paths = CallFunc_GetTagQueriesStruct_Paths;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetTrait_Paths = CallFunc_GetTrait_Paths;
	Parms.CallFunc_GetTrait_ReturnValue = CallFunc_GetTrait_ReturnValue;
	Parms.CallFunc_IsSheltered_ReturnValue = CallFunc_IsSheltered_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_FBiomesRowHandleFBiomesRowHandle_ReturnValue = CallFunc_EqualEqual_FBiomesRowHandleFBiomesRowHandle_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetTrait_Paths_1 = CallFunc_GetTrait_Paths_1;
	Parms.CallFunc_GetTrait_ReturnValue_1 = CallFunc_GetTrait_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_GetInventory_ReturnValue = CallFunc_GetInventory_ReturnValue;
	Parms.CallFunc_DealDamageToInventoryItems_ReturnValue = CallFunc_DealDamageToInventoryItems_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WeatherController.BP_WeatherController_C.ClogDeployableActors
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBiomesRowHandle            Biome                                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// int32                              Percent                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               HalveEffectiveness                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusActor*                TargetActor                                                      (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CanClog                                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FIcarusBiome                CallFunc_GetBiomesStruct_Biomes                                  (None)
// enum class EValid                  CallFunc_GetBiomesStruct_Paths                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EValid                  CallFunc_GetTrait_Paths                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UProcessingComponent*        CallFunc_GetTrait_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Divide_IntInt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FModifier                   K2Node_MakeStruct_Modifier                                       (NoDestructor)
// struct FModifier                   K2Node_MakeStruct_Modifier_1                                     (NoDestructor)
// int32                              CallFunc_AddModifierState_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveModifierState_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_AddModifierState_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetTrait_Paths_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UShelteredComponent*         CallFunc_GetTrait_ReturnValue_1                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSheltered_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActorCollection            CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusActor*                CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_WeatherController_C::ClogDeployableActors(const struct FBiomesRowHandle& Biome, int32 Percent, bool HalveEffectiveness, class AIcarusActor* TargetActor, bool CanClog, const struct FIcarusBiome& CallFunc_GetBiomesStruct_Biomes, enum class EValid CallFunc_GetBiomesStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, enum class EValid CallFunc_GetTrait_Paths, class UProcessingComponent* CallFunc_GetTrait_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, int32 CallFunc_Divide_IntInt_ReturnValue, const struct FModifier& K2Node_MakeStruct_Modifier, const struct FModifier& K2Node_MakeStruct_Modifier_1, int32 CallFunc_AddModifierState_ReturnValue, bool CallFunc_RemoveModifierState_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool Temp_bool_Variable, int32 Temp_int_Array_Index_Variable, int32 K2Node_Select_Default, int32 CallFunc_AddModifierState_ReturnValue_1, enum class EValid CallFunc_GetTrait_Paths_1, class UShelteredComponent* CallFunc_GetTrait_ReturnValue_1, bool CallFunc_IsSheltered_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_2, int32 Temp_int_Loop_Counter_Variable, const struct FActorCollection& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class AIcarusActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeatherController_C", "ClogDeployableActors");

	Params::ABP_WeatherController_C_ClogDeployableActors_Params Parms{};

	Parms.Biome = Biome;
	Parms.Percent = Percent;
	Parms.HalveEffectiveness = HalveEffectiveness;
	Parms.TargetActor = TargetActor;
	Parms.CanClog = CanClog;
	Parms.CallFunc_GetBiomesStruct_Biomes = CallFunc_GetBiomesStruct_Biomes;
	Parms.CallFunc_GetBiomesStruct_Paths = CallFunc_GetBiomesStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetTrait_Paths = CallFunc_GetTrait_Paths;
	Parms.CallFunc_GetTrait_ReturnValue = CallFunc_GetTrait_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_Divide_IntInt_ReturnValue = CallFunc_Divide_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_Modifier = K2Node_MakeStruct_Modifier;
	Parms.K2Node_MakeStruct_Modifier_1 = K2Node_MakeStruct_Modifier_1;
	Parms.CallFunc_AddModifierState_ReturnValue = CallFunc_AddModifierState_ReturnValue;
	Parms.CallFunc_RemoveModifierState_ReturnValue = CallFunc_RemoveModifierState_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_AddModifierState_ReturnValue_1 = CallFunc_AddModifierState_ReturnValue_1;
	Parms.CallFunc_GetTrait_Paths_1 = CallFunc_GetTrait_Paths_1;
	Parms.CallFunc_GetTrait_ReturnValue_1 = CallFunc_GetTrait_ReturnValue_1;
	Parms.CallFunc_IsSheltered_ReturnValue = CallFunc_IsSheltered_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WeatherController.BP_WeatherController_C.GetInitialForecastRow
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProspectForecastRowHandle  Forecast                                                         (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UProspectSubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FProspectForecastRowHandle  CallFunc_GetProspectForecastRow_Forecast                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasActiveProspect_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FIcarusProspect             CallFunc_GetActiveProspectData_ReturnValue                       (ConstParm)
// bool                               CallFunc_IsRowHandleValid_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FProspectForecastRowHandle  K2Node_Select_Default                                            (NoDestructor, HasGetValueTypeHash)

void ABP_WeatherController_C::GetInitialForecastRow(struct FProspectForecastRowHandle* Forecast, bool Temp_bool_Variable, class UProspectSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, const struct FProspectForecastRowHandle& CallFunc_GetProspectForecastRow_Forecast, bool CallFunc_HasActiveProspect_ReturnValue, const struct FIcarusProspect& CallFunc_GetActiveProspectData_ReturnValue, bool CallFunc_IsRowHandleValid_ReturnValue, const struct FProspectForecastRowHandle& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeatherController_C", "GetInitialForecastRow");

	Params::ABP_WeatherController_C_GetInitialForecastRow_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetProspectForecastRow_Forecast = CallFunc_GetProspectForecastRow_Forecast;
	Parms.CallFunc_HasActiveProspect_ReturnValue = CallFunc_HasActiveProspect_ReturnValue;
	Parms.CallFunc_GetActiveProspectData_ReturnValue = CallFunc_GetActiveProspectData_ReturnValue;
	Parms.CallFunc_IsRowHandleValid_ReturnValue = CallFunc_IsRowHandleValid_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Forecast != nullptr)
		*Forecast = std::move(Parms.Forecast);

}


// Function BP_WeatherController.BP_WeatherController_C.OnForecastRestored
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_WeatherController_C::OnForecastRestored()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeatherController_C", "OnForecastRestored");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_WeatherController.BP_WeatherController_C.Update Forecast
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProspectForecastRowHandle  ProspectForecast                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ABP_WeatherController_C::Update_Forecast(const struct FProspectForecastRowHandle& ProspectForecast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeatherController_C", "Update Forecast");

	Params::ABP_WeatherController_C_Update_Forecast_Params Parms{};

	Parms.ProspectForecast = ProspectForecast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WeatherController.BP_WeatherController_C.GetProspectForecastRow
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProspectForecastRowHandle  Forecast                                                         (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FProspectForecastRowHandle  Temp_struct_Variable                                             (NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UProspectSubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasActiveProspect_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FIcarusProspect             CallFunc_GetActiveProspectData_ReturnValue                       (ConstParm)
// struct FDifficultySetup            CallFunc_GetCurrentProspectDifficultySetup_DifficultySetup       (None)
// bool                               CallFunc_GetCurrentProspectDifficultySetup_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsRowHandleValid_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsRowHandleValid_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FProspectForecastRowHandle  K2Node_Select_Default                                            (NoDestructor, HasGetValueTypeHash)
// struct FProspectForecastRowHandle  K2Node_Select_Default_1                                          (NoDestructor, HasGetValueTypeHash)

void ABP_WeatherController_C::GetProspectForecastRow(struct FProspectForecastRowHandle* Forecast, bool Temp_bool_Variable, const struct FProspectForecastRowHandle& Temp_struct_Variable, bool Temp_bool_Variable_1, class UProspectSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_HasActiveProspect_ReturnValue, const struct FIcarusProspect& CallFunc_GetActiveProspectData_ReturnValue, const struct FDifficultySetup& CallFunc_GetCurrentProspectDifficultySetup_DifficultySetup, bool CallFunc_GetCurrentProspectDifficultySetup_ReturnValue, bool CallFunc_IsRowHandleValid_ReturnValue, bool CallFunc_IsRowHandleValid_ReturnValue_1, const struct FProspectForecastRowHandle& K2Node_Select_Default, const struct FProspectForecastRowHandle& K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeatherController_C", "GetProspectForecastRow");

	Params::ABP_WeatherController_C_GetProspectForecastRow_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_HasActiveProspect_ReturnValue = CallFunc_HasActiveProspect_ReturnValue;
	Parms.CallFunc_GetActiveProspectData_ReturnValue = CallFunc_GetActiveProspectData_ReturnValue;
	Parms.CallFunc_GetCurrentProspectDifficultySetup_DifficultySetup = CallFunc_GetCurrentProspectDifficultySetup_DifficultySetup;
	Parms.CallFunc_GetCurrentProspectDifficultySetup_ReturnValue = CallFunc_GetCurrentProspectDifficultySetup_ReturnValue;
	Parms.CallFunc_IsRowHandleValid_ReturnValue = CallFunc_IsRowHandleValid_ReturnValue;
	Parms.CallFunc_IsRowHandleValid_ReturnValue_1 = CallFunc_IsRowHandleValid_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Forecast != nullptr)
		*Forecast = std::move(Parms.Forecast);

}


// Function BP_WeatherController.BP_WeatherController_C.GetGameTimeSeconds
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              TimeSeconds                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetLevelTimeElapsedSec_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WeatherController_C::GetGameTimeSeconds(int32* TimeSeconds, int32 CallFunc_GetLevelTimeElapsedSec_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeatherController_C", "GetGameTimeSeconds");

	Params::ABP_WeatherController_C_GetGameTimeSeconds_Params Parms{};

	Parms.CallFunc_GetLevelTimeElapsedSec_ReturnValue = CallFunc_GetLevelTimeElapsedSec_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (TimeSeconds != nullptr)
		*TimeSeconds = Parms.TimeSeconds;

}


// Function BP_WeatherController.BP_WeatherController_C.SetupProspectWeatherData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              GameStateSeed                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FWeatherPoolEntry>   WeatherPool                                                      (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FWeatherPoolEntry>   CallFunc_GetProspectWeatherPool_WeatherPools                     (ReferenceParm)
// struct FWeatherPoolsRowHandle      CallFunc_GetProspectWeatherPool_RowHandle                        (NoDestructor, HasGetValueTypeHash)
// struct FWeatherPoolEntry           CallFunc_Array_Get_Item                                          (NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIcarusWeatherEvent         CallFunc_GetWeatherEventsStruct_WeatherEvents                    (None)
// enum class EValid                  CallFunc_GetWeatherEventsStruct_Paths                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWeatherBiomeGroupsRowHandleCallFunc_Array_Get_Item_1                                        (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWeatherBiomeGroupForecast  K2Node_MakeStruct_WeatherBiomeGroupForecast                      (None)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWeatherBiomeGroupsRowHandleCallFunc_Array_Get_Item_2                                        (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWeatherBiomeGroupsEnum     CallFunc_RowHandleToStruct_ReturnValue                           (HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WeatherController_C::SetupProspectWeatherData(int32 GameStateSeed, const TArray<struct FWeatherPoolEntry>& WeatherPool, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_2, TArray<struct FWeatherPoolEntry>& CallFunc_GetProspectWeatherPool_WeatherPools, const struct FWeatherPoolsRowHandle& CallFunc_GetProspectWeatherPool_RowHandle, const struct FWeatherPoolEntry& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FIcarusWeatherEvent& CallFunc_GetWeatherEventsStruct_WeatherEvents, enum class EValid CallFunc_GetWeatherEventsStruct_Paths, int32 CallFunc_Subtract_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Max_ReturnValue, const struct FWeatherBiomeGroupsRowHandle& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FWeatherBiomeGroupForecast& K2Node_MakeStruct_WeatherBiomeGroupForecast, int32 Temp_int_Loop_Counter_Variable_2, const struct FWeatherBiomeGroupsRowHandle& CallFunc_Array_Get_Item_2, int32 CallFunc_Subtract_IntInt_ReturnValue_1, const struct FWeatherBiomeGroupsEnum& CallFunc_RowHandleToStruct_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Array_AddUnique_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeatherController_C", "SetupProspectWeatherData");

	Params::ABP_WeatherController_C_SetupProspectWeatherData_Params Parms{};

	Parms.GameStateSeed = GameStateSeed;
	Parms.WeatherPool = WeatherPool;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_GetProspectWeatherPool_WeatherPools = CallFunc_GetProspectWeatherPool_WeatherPools;
	Parms.CallFunc_GetProspectWeatherPool_RowHandle = CallFunc_GetProspectWeatherPool_RowHandle;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetWeatherEventsStruct_WeatherEvents = CallFunc_GetWeatherEventsStruct_WeatherEvents;
	Parms.CallFunc_GetWeatherEventsStruct_Paths = CallFunc_GetWeatherEventsStruct_Paths;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.K2Node_MakeStruct_WeatherBiomeGroupForecast = K2Node_MakeStruct_WeatherBiomeGroupForecast;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_RowHandleToStruct_ReturnValue = CallFunc_RowHandleToStruct_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WeatherController.BP_WeatherController_C.Flush Forecast Weather
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              StartTime                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FProspectForecastRowHandle  CallFunc_MakeLiteralProspectForecast_ReturnValue                 (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetGameTimeSeconds_TimeSeconds                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_WeatherController_C::Flush_Forecast_Weather(int32 StartTime, const struct FProspectForecastRowHandle& CallFunc_MakeLiteralProspectForecast_ReturnValue, int32 CallFunc_GetGameTimeSeconds_TimeSeconds, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeatherController_C", "Flush Forecast Weather");

	Params::ABP_WeatherController_C_Flush_Forecast_Weather_Params Parms{};

	Parms.StartTime = StartTime;
	Parms.CallFunc_MakeLiteralProspectForecast_ReturnValue = CallFunc_MakeLiteralProspectForecast_ReturnValue;
	Parms.CallFunc_GetGameTimeSeconds_TimeSeconds = CallFunc_GetGameTimeSeconds_TimeSeconds;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WeatherController.BP_WeatherController_C.GetProspectWeatherPool
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FWeatherPoolEntry>   WeatherPools                                                     (Parm, OutParm)
// struct FWeatherPoolsRowHandle      RowHandle                                                        (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// struct FWeatherPoolsRowHandle      Temp_wildcard_Variable                                           (NoDestructor, HasGetValueTypeHash)
// class UProspectSubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIcarusProspect             CallFunc_GetActiveProspectData_ReturnValue                       (ConstParm)
// bool                               CallFunc_HasActiveProspect_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FProspectForecast           CallFunc_GetProspectForecastStruct_ProspectForecast              (None)
// enum class EValid                  CallFunc_GetProspectForecastStruct_Paths                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIcarusWeatherPoolData      CallFunc_GetWeatherPoolsStruct_WeatherPools                      (None)
// enum class EValid                  CallFunc_GetWeatherPoolsStruct_Paths                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDifficultySetup            CallFunc_GetCurrentProspectDifficultySetup_DifficultySetup       (None)
// bool                               CallFunc_GetCurrentProspectDifficultySetup_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FProspectForecast           CallFunc_GetProspectForecastStruct_ProspectForecast_1            (None)
// enum class EValid                  CallFunc_GetProspectForecastStruct_Paths_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FWeatherPoolsRowHandle      K2Node_Select_Default                                            (NoDestructor, HasGetValueTypeHash)

void ABP_WeatherController_C::GetProspectWeatherPool(TArray<struct FWeatherPoolEntry>* WeatherPools, struct FWeatherPoolsRowHandle* RowHandle, const struct FWeatherPoolsRowHandle& Temp_wildcard_Variable, class UProspectSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, const struct FIcarusProspect& CallFunc_GetActiveProspectData_ReturnValue, bool CallFunc_HasActiveProspect_ReturnValue, const struct FProspectForecast& CallFunc_GetProspectForecastStruct_ProspectForecast, enum class EValid CallFunc_GetProspectForecastStruct_Paths, const struct FIcarusWeatherPoolData& CallFunc_GetWeatherPoolsStruct_WeatherPools, enum class EValid CallFunc_GetWeatherPoolsStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, bool Temp_bool_Variable, const struct FDifficultySetup& CallFunc_GetCurrentProspectDifficultySetup_DifficultySetup, bool CallFunc_GetCurrentProspectDifficultySetup_ReturnValue, const struct FProspectForecast& CallFunc_GetProspectForecastStruct_ProspectForecast_1, enum class EValid CallFunc_GetProspectForecastStruct_Paths_1, bool K2Node_SwitchEnum_CmpSuccess_2, const struct FWeatherPoolsRowHandle& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeatherController_C", "GetProspectWeatherPool");

	Params::ABP_WeatherController_C_GetProspectWeatherPool_Params Parms{};

	Parms.Temp_wildcard_Variable = Temp_wildcard_Variable;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetActiveProspectData_ReturnValue = CallFunc_GetActiveProspectData_ReturnValue;
	Parms.CallFunc_HasActiveProspect_ReturnValue = CallFunc_HasActiveProspect_ReturnValue;
	Parms.CallFunc_GetProspectForecastStruct_ProspectForecast = CallFunc_GetProspectForecastStruct_ProspectForecast;
	Parms.CallFunc_GetProspectForecastStruct_Paths = CallFunc_GetProspectForecastStruct_Paths;
	Parms.CallFunc_GetWeatherPoolsStruct_WeatherPools = CallFunc_GetWeatherPoolsStruct_WeatherPools;
	Parms.CallFunc_GetWeatherPoolsStruct_Paths = CallFunc_GetWeatherPoolsStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetCurrentProspectDifficultySetup_DifficultySetup = CallFunc_GetCurrentProspectDifficultySetup_DifficultySetup;
	Parms.CallFunc_GetCurrentProspectDifficultySetup_ReturnValue = CallFunc_GetCurrentProspectDifficultySetup_ReturnValue;
	Parms.CallFunc_GetProspectForecastStruct_ProspectForecast_1 = CallFunc_GetProspectForecastStruct_ProspectForecast_1;
	Parms.CallFunc_GetProspectForecastStruct_Paths_1 = CallFunc_GetProspectForecastStruct_Paths_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (WeatherPools != nullptr)
		*WeatherPools = std::move(Parms.WeatherPools);

	if (RowHandle != nullptr)
		*RowHandle = std::move(Parms.RowHandle);

}


// Function BP_WeatherController.BP_WeatherController_C.ExtinguishFires
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBiomesRowHandle            Biome                                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// float                              Intensity                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ADisasterController*         CallFunc_GetDisasterController_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFlammableInstance*>  CallFunc_GetFlammableInstancesWithinBiome_ReturnValue            (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFlammableInstance*          CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCurrentState_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsActorBeingDestroyed_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusActor*                K2Node_DynamicCast_AsIcarus_Actor                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UShelteredComponent*         CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasTag_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsSheltered_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABuildingBase*               K2Node_DynamicCast_AsBuilding_Base                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsBuildingOutside_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsExtinguished_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_WeatherController_C::ExtinguishFires(const struct FBiomesRowHandle& Biome, float Intensity, int32 Temp_int_Array_Index_Variable, float CallFunc_RandomFloat_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class ADisasterController* CallFunc_GetDisasterController_ReturnValue, TArray<class UFlammableInstance*>& CallFunc_GetFlammableInstancesWithinBiome_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UFlammableInstance* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsCurrentState_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, bool CallFunc_IsActorBeingDestroyed_ReturnValue, class AIcarusActor* K2Node_DynamicCast_AsIcarus_Actor, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue, class UShelteredComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_HasTag_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsSheltered_ReturnValue, class ABuildingBase* K2Node_DynamicCast_AsBuilding_Base, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsBuildingOutside_ReturnValue, bool CallFunc_IsExtinguished_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeatherController_C", "ExtinguishFires");

	Params::ABP_WeatherController_C_ExtinguishFires_Params Parms{};

	Parms.Biome = Biome;
	Parms.Intensity = Intensity;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_RandomFloat_ReturnValue = CallFunc_RandomFloat_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetDisasterController_ReturnValue = CallFunc_GetDisasterController_ReturnValue;
	Parms.CallFunc_GetFlammableInstancesWithinBiome_ReturnValue = CallFunc_GetFlammableInstancesWithinBiome_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsCurrentState_ReturnValue = CallFunc_IsCurrentState_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_IsActorBeingDestroyed_ReturnValue = CallFunc_IsActorBeingDestroyed_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcarus_Actor = K2Node_DynamicCast_AsIcarus_Actor;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_HasTag_ReturnValue = CallFunc_HasTag_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsSheltered_ReturnValue = CallFunc_IsSheltered_ReturnValue;
	Parms.K2Node_DynamicCast_AsBuilding_Base = K2Node_DynamicCast_AsBuilding_Base;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsBuildingOutside_ReturnValue = CallFunc_IsBuildingOutside_ReturnValue;
	Parms.CallFunc_IsExtinguished_ReturnValue = CallFunc_IsExtinguished_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WeatherController.BP_WeatherController_C.DebugWeatherController
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBiomesRowHandle            Biome                                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// float                              FogExtinctionAmount                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              FogDensityAmount                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              SmokeAmount                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              HailAmount                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              EmbersAmount                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              AshAmount                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              AcidRainAmount                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              TempModifierAmount                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              WindForceAmount                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     WindDirVec                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              WindGustAmount                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              WindStrengthAmount                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              WindSpeedAmount                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              DebrisAmount                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              SandAmount                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ThunderAmount                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              SnowStormAmount                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              SnowAmount                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CloudAmount                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              RainAmount                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWeatherManagerComponent*    WeatherManagerRef                                                (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_4                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_5                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_6                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_7                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_8                           (HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_9                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_10                          (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_11                          (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_12                          (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_13                          (HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_14                          (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_15                          (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_16                          (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_17                          (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_18                          (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_19                          (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_20                          (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_21                          (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_22                          (HasGetValueTypeHash)
// struct FBiomesEnum                 CallFunc_RowHandleToStruct_ReturnValue                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// float                              CallFunc_GetFogExtinction_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFogDensity_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetHail_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetSmoke_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAcidRain_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEmbers_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAsh_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetTemperatureModifier_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWindForce_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetWindDirection_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWindGust_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWindStrength_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWindSpeed_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDebris_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetSandAmount_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetSnowStormAmount_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetSnowAmount_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetThunderAmount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCloudyAmount_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetRainAmount_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWeatherManagerComponent*    CallFunc_GetWeatherManager_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WeatherController_C::DebugWeatherController(const struct FBiomesRowHandle& Biome, float FogExtinctionAmount, float FogDensityAmount, float SmokeAmount, float HailAmount, float EmbersAmount, float AshAmount, float AcidRainAmount, int32 TempModifierAmount, float WindForceAmount, const struct FVector& WindDirVec, float WindGustAmount, float WindStrengthAmount, float WindSpeedAmount, float DebrisAmount, float SandAmount, float ThunderAmount, float SnowStormAmount, float SnowAmount, float CloudAmount, float RainAmount, class UWeatherManagerComponent* WeatherManagerRef, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_5, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_6, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_7, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_8, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_9, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_10, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_11, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_12, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_13, class FText CallFunc_Format_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_14, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_15, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_16, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_17, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_18, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_19, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_20, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_21, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_22, const struct FBiomesEnum& CallFunc_RowHandleToStruct_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, float CallFunc_GetFogExtinction_ReturnValue, float CallFunc_GetFogDensity_ReturnValue, float CallFunc_GetHail_ReturnValue, float CallFunc_GetSmoke_ReturnValue, float CallFunc_GetAcidRain_ReturnValue, float CallFunc_GetEmbers_ReturnValue, float CallFunc_GetAsh_ReturnValue, int32 CallFunc_GetTemperatureModifier_ReturnValue, float CallFunc_GetWindForce_ReturnValue, const struct FVector& CallFunc_GetWindDirection_ReturnValue, float CallFunc_GetWindGust_ReturnValue, float CallFunc_GetWindStrength_ReturnValue, float CallFunc_GetWindSpeed_ReturnValue, float CallFunc_GetDebris_ReturnValue, float CallFunc_GetSandAmount_ReturnValue, float CallFunc_GetSnowStormAmount_ReturnValue, float CallFunc_GetSnowAmount_ReturnValue, float CallFunc_GetThunderAmount_ReturnValue, float CallFunc_GetCloudyAmount_ReturnValue, float CallFunc_GetRainAmount_ReturnValue, class UWeatherManagerComponent* CallFunc_GetWeatherManager_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeatherController_C", "DebugWeatherController");

	Params::ABP_WeatherController_C_DebugWeatherController_Params Parms{};

	Parms.Biome = Biome;
	Parms.FogExtinctionAmount = FogExtinctionAmount;
	Parms.FogDensityAmount = FogDensityAmount;
	Parms.SmokeAmount = SmokeAmount;
	Parms.HailAmount = HailAmount;
	Parms.EmbersAmount = EmbersAmount;
	Parms.AshAmount = AshAmount;
	Parms.AcidRainAmount = AcidRainAmount;
	Parms.TempModifierAmount = TempModifierAmount;
	Parms.WindForceAmount = WindForceAmount;
	Parms.WindDirVec = WindDirVec;
	Parms.WindGustAmount = WindGustAmount;
	Parms.WindStrengthAmount = WindStrengthAmount;
	Parms.WindSpeedAmount = WindSpeedAmount;
	Parms.DebrisAmount = DebrisAmount;
	Parms.SandAmount = SandAmount;
	Parms.ThunderAmount = ThunderAmount;
	Parms.SnowStormAmount = SnowStormAmount;
	Parms.SnowAmount = SnowAmount;
	Parms.CloudAmount = CloudAmount;
	Parms.RainAmount = RainAmount;
	Parms.WeatherManagerRef = WeatherManagerRef;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.K2Node_MakeStruct_FormatArgumentData_3 = K2Node_MakeStruct_FormatArgumentData_3;
	Parms.K2Node_MakeStruct_FormatArgumentData_4 = K2Node_MakeStruct_FormatArgumentData_4;
	Parms.K2Node_MakeStruct_FormatArgumentData_5 = K2Node_MakeStruct_FormatArgumentData_5;
	Parms.K2Node_MakeStruct_FormatArgumentData_6 = K2Node_MakeStruct_FormatArgumentData_6;
	Parms.K2Node_MakeStruct_FormatArgumentData_7 = K2Node_MakeStruct_FormatArgumentData_7;
	Parms.K2Node_MakeStruct_FormatArgumentData_8 = K2Node_MakeStruct_FormatArgumentData_8;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.K2Node_MakeStruct_FormatArgumentData_9 = K2Node_MakeStruct_FormatArgumentData_9;
	Parms.K2Node_MakeStruct_FormatArgumentData_10 = K2Node_MakeStruct_FormatArgumentData_10;
	Parms.K2Node_MakeStruct_FormatArgumentData_11 = K2Node_MakeStruct_FormatArgumentData_11;
	Parms.K2Node_MakeStruct_FormatArgumentData_12 = K2Node_MakeStruct_FormatArgumentData_12;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeStruct_FormatArgumentData_13 = K2Node_MakeStruct_FormatArgumentData_13;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_14 = K2Node_MakeStruct_FormatArgumentData_14;
	Parms.K2Node_MakeStruct_FormatArgumentData_15 = K2Node_MakeStruct_FormatArgumentData_15;
	Parms.K2Node_MakeStruct_FormatArgumentData_16 = K2Node_MakeStruct_FormatArgumentData_16;
	Parms.K2Node_MakeStruct_FormatArgumentData_17 = K2Node_MakeStruct_FormatArgumentData_17;
	Parms.K2Node_MakeStruct_FormatArgumentData_18 = K2Node_MakeStruct_FormatArgumentData_18;
	Parms.K2Node_MakeStruct_FormatArgumentData_19 = K2Node_MakeStruct_FormatArgumentData_19;
	Parms.K2Node_MakeStruct_FormatArgumentData_20 = K2Node_MakeStruct_FormatArgumentData_20;
	Parms.K2Node_MakeStruct_FormatArgumentData_21 = K2Node_MakeStruct_FormatArgumentData_21;
	Parms.K2Node_MakeStruct_FormatArgumentData_22 = K2Node_MakeStruct_FormatArgumentData_22;
	Parms.CallFunc_RowHandleToStruct_ReturnValue = CallFunc_RowHandleToStruct_ReturnValue;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.CallFunc_GetFogExtinction_ReturnValue = CallFunc_GetFogExtinction_ReturnValue;
	Parms.CallFunc_GetFogDensity_ReturnValue = CallFunc_GetFogDensity_ReturnValue;
	Parms.CallFunc_GetHail_ReturnValue = CallFunc_GetHail_ReturnValue;
	Parms.CallFunc_GetSmoke_ReturnValue = CallFunc_GetSmoke_ReturnValue;
	Parms.CallFunc_GetAcidRain_ReturnValue = CallFunc_GetAcidRain_ReturnValue;
	Parms.CallFunc_GetEmbers_ReturnValue = CallFunc_GetEmbers_ReturnValue;
	Parms.CallFunc_GetAsh_ReturnValue = CallFunc_GetAsh_ReturnValue;
	Parms.CallFunc_GetTemperatureModifier_ReturnValue = CallFunc_GetTemperatureModifier_ReturnValue;
	Parms.CallFunc_GetWindForce_ReturnValue = CallFunc_GetWindForce_ReturnValue;
	Parms.CallFunc_GetWindDirection_ReturnValue = CallFunc_GetWindDirection_ReturnValue;
	Parms.CallFunc_GetWindGust_ReturnValue = CallFunc_GetWindGust_ReturnValue;
	Parms.CallFunc_GetWindStrength_ReturnValue = CallFunc_GetWindStrength_ReturnValue;
	Parms.CallFunc_GetWindSpeed_ReturnValue = CallFunc_GetWindSpeed_ReturnValue;
	Parms.CallFunc_GetDebris_ReturnValue = CallFunc_GetDebris_ReturnValue;
	Parms.CallFunc_GetSandAmount_ReturnValue = CallFunc_GetSandAmount_ReturnValue;
	Parms.CallFunc_GetSnowStormAmount_ReturnValue = CallFunc_GetSnowStormAmount_ReturnValue;
	Parms.CallFunc_GetSnowAmount_ReturnValue = CallFunc_GetSnowAmount_ReturnValue;
	Parms.CallFunc_GetThunderAmount_ReturnValue = CallFunc_GetThunderAmount_ReturnValue;
	Parms.CallFunc_GetCloudyAmount_ReturnValue = CallFunc_GetCloudyAmount_ReturnValue;
	Parms.CallFunc_GetRainAmount_ReturnValue = CallFunc_GetRainAmount_ReturnValue;
	Parms.CallFunc_GetWeatherManager_ReturnValue = CallFunc_GetWeatherManager_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WeatherController.BP_WeatherController_C.PlayerModifiers
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBiomesRowHandle            Biome                                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// float                              Intensity                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagQuery           Query                                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FModifier                   Modifier                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UConnectedPlayers*           CallFunc_GetConnectedPlayers_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FConnectedPlayer>    CallFunc_GetInitialisedConnectedPlayers_ReturnValue              (ConstParm, ReferenceParm)
// struct FConnectedPlayer            CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_AddModifierState_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetShelter_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsTagQueryEmpty_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DoesContainerMatchTagQuery_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_FBiomesRowHandleFBiomesRowHandle_ReturnValue (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_WeatherController_C::PlayerModifiers(const struct FBiomesRowHandle& Biome, float Intensity, const struct FGameplayTagQuery& Query, const struct FModifier& Modifier, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UConnectedPlayers* CallFunc_GetConnectedPlayers_ReturnValue, TArray<struct FConnectedPlayer>& CallFunc_GetInitialisedConnectedPlayers_ReturnValue, const struct FConnectedPlayer& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_AddModifierState_ReturnValue, float CallFunc_GetShelter_ReturnValue, bool CallFunc_IsTagQueryEmpty_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_DoesContainerMatchTagQuery_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_FBiomesRowHandleFBiomesRowHandle_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeatherController_C", "PlayerModifiers");

	Params::ABP_WeatherController_C_PlayerModifiers_Params Parms{};

	Parms.Biome = Biome;
	Parms.Intensity = Intensity;
	Parms.Query = Query;
	Parms.Modifier = Modifier;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetConnectedPlayers_ReturnValue = CallFunc_GetConnectedPlayers_ReturnValue;
	Parms.CallFunc_GetInitialisedConnectedPlayers_ReturnValue = CallFunc_GetInitialisedConnectedPlayers_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_AddModifierState_ReturnValue = CallFunc_AddModifierState_ReturnValue;
	Parms.CallFunc_GetShelter_ReturnValue = CallFunc_GetShelter_ReturnValue;
	Parms.CallFunc_IsTagQueryEmpty_ReturnValue = CallFunc_IsTagQueryEmpty_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_DoesContainerMatchTagQuery_ReturnValue = CallFunc_DoesContainerMatchTagQuery_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_EqualEqual_FBiomesRowHandleFBiomesRowHandle_ReturnValue = CallFunc_EqualEqual_FBiomesRowHandleFBiomesRowHandle_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WeatherController.BP_WeatherController_C.DrawWeatherForecastDebug
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHUD*                        CallFunc_GetHUD_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusHUD*                  K2Node_DynamicCast_AsIcarus_HUD                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_WeatherController_C::DrawWeatherForecastDebug(bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AHUD* CallFunc_GetHUD_ReturnValue, class AIcarusHUD* K2Node_DynamicCast_AsIcarus_HUD, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeatherController_C", "DrawWeatherForecastDebug");

	Params::ABP_WeatherController_C_DrawWeatherForecastDebug_Params Parms{};

	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetHUD_ReturnValue = CallFunc_GetHUD_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcarus_HUD = K2Node_DynamicCast_AsIcarus_HUD;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WeatherController.BP_WeatherController_C.Generate Future Events
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CurrentTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DoTick_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_WeatherController_C::Generate_Future_Events(int32 CurrentTime, bool CallFunc_IsServer_ReturnValue, bool CallFunc_DoTick_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeatherController_C", "Generate Future Events");

	Params::ABP_WeatherController_C_Generate_Future_Events_Params Parms{};

	Parms.CurrentTime = CurrentTime;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_DoTick_ReturnValue = CallFunc_DoTick_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WeatherController.BP_WeatherController_C.GetEventDuration
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FWeatherEventsRowHandle     Event                                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// int32                              Duration                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Sum                                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIcarusWeatherEvent         CallFunc_GetWeatherEventsStruct_WeatherEvents                    (None)
// enum class EValid                  CallFunc_GetWeatherEventsStruct_Paths                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_WeatherController_C::GetEventDuration(const struct FWeatherEventsRowHandle& Event, int32* Duration, int32 Sum, const struct FIcarusWeatherEvent& CallFunc_GetWeatherEventsStruct_WeatherEvents, enum class EValid CallFunc_GetWeatherEventsStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeatherController_C", "GetEventDuration");

	Params::ABP_WeatherController_C_GetEventDuration_Params Parms{};

	Parms.Event = Event;
	Parms.Sum = Sum;
	Parms.CallFunc_GetWeatherEventsStruct_WeatherEvents = CallFunc_GetWeatherEventsStruct_WeatherEvents;
	Parms.CallFunc_GetWeatherEventsStruct_Paths = CallFunc_GetWeatherEventsStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Duration != nullptr)
		*Duration = Parms.Duration;

}


// Function BP_WeatherController.BP_WeatherController_C.OneTimeInit
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              GameSeed                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              StartTime                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RestoreForecastFromDatabase_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FProspectForecastRowHandle  CallFunc_GetProspectForecastRow_Forecast                         (NoDestructor, HasGetValueTypeHash)
// struct FProspectForecastRowHandle  CallFunc_GetInitialForecastRow_Forecast                          (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetGameTimeSeconds_TimeSeconds                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldInitProspectSeed_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_WeatherController_C::OneTimeInit(int32 GameSeed, int32 StartTime, bool CallFunc_RestoreForecastFromDatabase_ReturnValue, const struct FProspectForecastRowHandle& CallFunc_GetProspectForecastRow_Forecast, const struct FProspectForecastRowHandle& CallFunc_GetInitialForecastRow_Forecast, int32 CallFunc_GetGameTimeSeconds_TimeSeconds, bool CallFunc_ShouldInitProspectSeed_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeatherController_C", "OneTimeInit");

	Params::ABP_WeatherController_C_OneTimeInit_Params Parms{};

	Parms.GameSeed = GameSeed;
	Parms.StartTime = StartTime;
	Parms.CallFunc_RestoreForecastFromDatabase_ReturnValue = CallFunc_RestoreForecastFromDatabase_ReturnValue;
	Parms.CallFunc_GetProspectForecastRow_Forecast = CallFunc_GetProspectForecastRow_Forecast;
	Parms.CallFunc_GetInitialForecastRow_Forecast = CallFunc_GetInitialForecastRow_Forecast;
	Parms.CallFunc_GetGameTimeSeconds_TimeSeconds = CallFunc_GetGameTimeSeconds_TimeSeconds;
	Parms.CallFunc_ShouldInitProspectSeed_ReturnValue = CallFunc_ShouldInitProspectSeed_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WeatherController.BP_WeatherController_C.Snow
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Intensity                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBiomesRowHandle            Biome                                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FIcarusBiome                CallFunc_GetBiomesStruct_Biomes                                  (None)
// enum class EValid                  CallFunc_GetBiomesStruct_Paths                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActorCollection            CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusActor*                CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_WeatherInteractable_C>K2Node_DynamicCast_AsBP_Weather_Interactable                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_WeatherController_C::Snow(float Intensity, const struct FBiomesRowHandle& Biome, const struct FIcarusBiome& CallFunc_GetBiomesStruct_Biomes, enum class EValid CallFunc_GetBiomesStruct_Paths, int32 Temp_int_Array_Index_Variable, bool K2Node_SwitchEnum_CmpSuccess, int32 Temp_int_Loop_Counter_Variable, const struct FActorCollection& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class AIcarusActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, TScriptInterface<class IBP_WeatherInteractable_C> K2Node_DynamicCast_AsBP_Weather_Interactable, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeatherController_C", "Snow");

	Params::ABP_WeatherController_C_Snow_Params Parms{};

	Parms.Intensity = Intensity;
	Parms.Biome = Biome;
	Parms.CallFunc_GetBiomesStruct_Biomes = CallFunc_GetBiomesStruct_Biomes;
	Parms.CallFunc_GetBiomesStruct_Paths = CallFunc_GetBiomesStruct_Paths;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Weather_Interactable = K2Node_DynamicCast_AsBP_Weather_Interactable;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WeatherController.BP_WeatherController_C.Rain
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBiomesRowHandle            Biome                                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// int32                              Rainfall__Millilitre_                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIcarusBiome                CallFunc_GetBiomesStruct_Biomes                                  (None)
// enum class EValid                  CallFunc_GetBiomesStruct_Paths                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActorCollection            CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusActor*                CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_WeatherInteractable_C>K2Node_DynamicCast_AsBP_Weather_Interactable                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_WeatherController_C::Rain(const struct FBiomesRowHandle& Biome, int32 Rainfall__Millilitre_, const struct FIcarusBiome& CallFunc_GetBiomesStruct_Biomes, enum class EValid CallFunc_GetBiomesStruct_Paths, int32 Temp_int_Array_Index_Variable, bool K2Node_SwitchEnum_CmpSuccess, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FActorCollection& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class AIcarusActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, TScriptInterface<class IBP_WeatherInteractable_C> K2Node_DynamicCast_AsBP_Weather_Interactable, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeatherController_C", "Rain");

	Params::ABP_WeatherController_C_Rain_Params Parms{};

	Parms.Biome = Biome;
	Parms.Rainfall__Millilitre_ = Rainfall__Millilitre_;
	Parms.CallFunc_GetBiomesStruct_Biomes = CallFunc_GetBiomesStruct_Biomes;
	Parms.CallFunc_GetBiomesStruct_Paths = CallFunc_GetBiomesStruct_Paths;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Weather_Interactable = K2Node_DynamicCast_AsBP_Weather_Interactable;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WeatherController.BP_WeatherController_C.Deployable Damage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBiomesRowHandle            Biome                                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// float                              Intensity                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagQuery           Query                                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FIcarusBiome                CallFunc_GetBiomesStruct_Biomes                                  (None)
// enum class EValid                  CallFunc_GetBiomesStruct_Paths                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsTagQueryEmpty_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FFloor_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActorCollection            CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusActor*                CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ADeployable*                 K2Node_DynamicCast_AsDeployable                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EValid                  CallFunc_GetTrait_Paths                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDeployableComponent*        CallFunc_GetTrait_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDeployableData             CallFunc_GetDeployableData_OutData                               (None)
// bool                               CallFunc_GetDeployableData_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DealFlatDamage_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UShelteredComponent*         CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSheltered_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DoesContainerMatchTagQuery_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_WeatherController_C::Deployable_Damage(const struct FBiomesRowHandle& Biome, float Intensity, const struct FGameplayTagQuery& Query, const struct FIcarusBiome& CallFunc_GetBiomesStruct_Biomes, enum class EValid CallFunc_GetBiomesStruct_Paths, int32 Temp_int_Array_Index_Variable, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsTagQueryEmpty_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_FFloor_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const struct FActorCollection& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class AIcarusActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class ADeployable* K2Node_DynamicCast_AsDeployable, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, enum class EValid CallFunc_GetTrait_Paths, class UDeployableComponent* CallFunc_GetTrait_ReturnValue, const struct FDeployableData& CallFunc_GetDeployableData_OutData, bool CallFunc_GetDeployableData_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_DealFlatDamage_ReturnValue, class UShelteredComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsSheltered_ReturnValue, bool CallFunc_DoesContainerMatchTagQuery_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeatherController_C", "Deployable Damage");

	Params::ABP_WeatherController_C_Deployable_Damage_Params Parms{};

	Parms.Biome = Biome;
	Parms.Intensity = Intensity;
	Parms.Query = Query;
	Parms.CallFunc_GetBiomesStruct_Biomes = CallFunc_GetBiomesStruct_Biomes;
	Parms.CallFunc_GetBiomesStruct_Paths = CallFunc_GetBiomesStruct_Paths;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsTagQueryEmpty_ReturnValue = CallFunc_IsTagQueryEmpty_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_FFloor_ReturnValue = CallFunc_FFloor_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsDeployable = K2Node_DynamicCast_AsDeployable;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetTrait_Paths = CallFunc_GetTrait_Paths;
	Parms.CallFunc_GetTrait_ReturnValue = CallFunc_GetTrait_ReturnValue;
	Parms.CallFunc_GetDeployableData_OutData = CallFunc_GetDeployableData_OutData;
	Parms.CallFunc_GetDeployableData_ReturnValue = CallFunc_GetDeployableData_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_DealFlatDamage_ReturnValue = CallFunc_DealFlatDamage_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsSheltered_ReturnValue = CallFunc_IsSheltered_ReturnValue;
	Parms.CallFunc_DoesContainerMatchTagQuery_ReturnValue = CallFunc_DoesContainerMatchTagQuery_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WeatherController.BP_WeatherController_C.Player Damage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBiomesRowHandle            Biome                                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// float                              Intensity                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagQuery           Query                                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UConnectedPlayers*           CallFunc_GetConnectedPlayers_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FConnectedPlayer>    CallFunc_GetInitialisedConnectedPlayers_ReturnValue              (ConstParm, ReferenceParm)
// struct FConnectedPlayer            CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UShelteredComponent*         CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurrentExposureValue_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetShelter_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsTagQueryEmpty_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DoesContainerMatchTagQuery_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FBiomesRowHandleFBiomesRowHandle_ReturnValue (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DealFlatDamage_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_WeatherController_C::Player_Damage(const struct FBiomesRowHandle& Biome, float Intensity, const struct FGameplayTagQuery& Query, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UConnectedPlayers* CallFunc_GetConnectedPlayers_ReturnValue, TArray<struct FConnectedPlayer>& CallFunc_GetInitialisedConnectedPlayers_ReturnValue, const struct FConnectedPlayer& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UShelteredComponent* CallFunc_GetComponentByClass_ReturnValue, float CallFunc_GetCurrentExposureValue_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_GetShelter_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_IsTagQueryEmpty_ReturnValue, bool CallFunc_DoesContainerMatchTagQuery_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, bool CallFunc_EqualEqual_FBiomesRowHandleFBiomesRowHandle_ReturnValue, bool CallFunc_DealFlatDamage_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeatherController_C", "Player Damage");

	Params::ABP_WeatherController_C_Player_Damage_Params Parms{};

	Parms.Biome = Biome;
	Parms.Intensity = Intensity;
	Parms.Query = Query;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetConnectedPlayers_ReturnValue = CallFunc_GetConnectedPlayers_ReturnValue;
	Parms.CallFunc_GetInitialisedConnectedPlayers_ReturnValue = CallFunc_GetInitialisedConnectedPlayers_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetCurrentExposureValue_ReturnValue = CallFunc_GetCurrentExposureValue_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_GetShelter_ReturnValue = CallFunc_GetShelter_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_IsTagQueryEmpty_ReturnValue = CallFunc_IsTagQueryEmpty_ReturnValue;
	Parms.CallFunc_DoesContainerMatchTagQuery_ReturnValue = CallFunc_DoesContainerMatchTagQuery_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_EqualEqual_FBiomesRowHandleFBiomesRowHandle_ReturnValue = CallFunc_EqualEqual_FBiomesRowHandleFBiomesRowHandle_ReturnValue;
	Parms.CallFunc_DealFlatDamage_ReturnValue = CallFunc_DealFlatDamage_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WeatherController.BP_WeatherController_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class AWeatherForecastManager*     CallFunc_GetWeatherForecastManager_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WeatherController_C::UserConstructionScript(bool CallFunc_IsServer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AWeatherForecastManager* CallFunc_GetWeatherForecastManager_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeatherController_C", "UserConstructionScript");

	Params::ABP_WeatherController_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetWeatherForecastManager_ReturnValue = CallFunc_GetWeatherForecastManager_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WeatherController.BP_WeatherController_C.SetSand
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Severity                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBiomesRowHandle            Biome                                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ABP_WeatherController_C::SetSand(float Severity, const struct FBiomesRowHandle& Biome)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeatherController_C", "SetSand");

	Params::ABP_WeatherController_C_SetSand_Params Parms{};

	Parms.Severity = Severity;
	Parms.Biome = Biome;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WeatherController.BP_WeatherController_C.ClearWeatherBiome
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBiomesEnum                 Biome                                                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_WeatherController_C::ClearWeatherBiome(const struct FBiomesEnum& Biome)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeatherController_C", "ClearWeatherBiome");

	Params::ABP_WeatherController_C_ClearWeatherBiome_Params Parms{};

	Parms.Biome = Biome;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WeatherController.BP_WeatherController_C.OnSeedInitialised
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Seed                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WeatherController_C::OnSeedInitialised(int32 Seed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeatherController_C", "OnSeedInitialised");

	Params::ABP_WeatherController_C_OnSeedInitialised_Params Parms{};

	Parms.Seed = Seed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WeatherController.BP_WeatherController_C.SetCloud
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Severity                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBiomesRowHandle            Biome                                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ABP_WeatherController_C::SetCloud(float Severity, const struct FBiomesRowHandle& Biome)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeatherController_C", "SetCloud");

	Params::ABP_WeatherController_C_SetCloud_Params Parms{};

	Parms.Severity = Severity;
	Parms.Biome = Biome;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WeatherController.BP_WeatherController_C.SetThunder
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Severity                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBiomesRowHandle            Biome                                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ABP_WeatherController_C::SetThunder(float Severity, const struct FBiomesRowHandle& Biome)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeatherController_C", "SetThunder");

	Params::ABP_WeatherController_C_SetThunder_Params Parms{};

	Parms.Severity = Severity;
	Parms.Biome = Biome;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WeatherController.BP_WeatherController_C.SetSnowStorm
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Severity                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBiomesRowHandle            Biome                                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ABP_WeatherController_C::SetSnowStorm(float Severity, const struct FBiomesRowHandle& Biome)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeatherController_C", "SetSnowStorm");

	Params::ABP_WeatherController_C_SetSnowStorm_Params Parms{};

	Parms.Severity = Severity;
	Parms.Biome = Biome;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WeatherController.BP_WeatherController_C.ShowWeatherWarningMessage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBiomesRowHandle            Biome                                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class FText                        Message                                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_WeatherController_C::ShowWeatherWarningMessage(const struct FBiomesRowHandle& Biome, class FText Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeatherController_C", "ShowWeatherWarningMessage");

	Params::ABP_WeatherController_C_ShowWeatherWarningMessage_Params Parms{};

	Parms.Biome = Biome;
	Parms.Message = Message;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WeatherController.BP_WeatherController_C.HideWeatherWarningMessage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBiomesRowHandle            Biome                                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ABP_WeatherController_C::HideWeatherWarningMessage(const struct FBiomesRowHandle& Biome)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeatherController_C", "HideWeatherWarningMessage");

	Params::ABP_WeatherController_C_HideWeatherWarningMessage_Params Parms{};

	Parms.Biome = Biome;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WeatherController.BP_WeatherController_C.SetSnow
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Severity                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBiomesRowHandle            Biome                                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ABP_WeatherController_C::SetSnow(float Severity, const struct FBiomesRowHandle& Biome)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeatherController_C", "SetSnow");

	Params::ABP_WeatherController_C_SetSnow_Params Parms{};

	Parms.Severity = Severity;
	Parms.Biome = Biome;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WeatherController.BP_WeatherController_C.SetBiomeWindVisuals
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              WindSpeed                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              WindStrength                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              WindGust                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBiomesRowHandle            BiomeRow                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ABP_WeatherController_C::SetBiomeWindVisuals(float WindSpeed, float WindStrength, float WindGust, const struct FBiomesRowHandle& BiomeRow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeatherController_C", "SetBiomeWindVisuals");

	Params::ABP_WeatherController_C_SetBiomeWindVisuals_Params Parms{};

	Parms.WindSpeed = WindSpeed;
	Parms.WindStrength = WindStrength;
	Parms.WindGust = WindGust;
	Parms.BiomeRow = BiomeRow;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WeatherController.BP_WeatherController_C.ClearAllWeather
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_WeatherController_C::ClearAllWeather()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeatherController_C", "ClearAllWeather");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_WeatherController.BP_WeatherController_C.SetBiomeWindForce
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              WindDirectionStrength                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBiomesRowHandle            BiomeRow                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ABP_WeatherController_C::SetBiomeWindForce(float WindDirectionStrength, const struct FBiomesRowHandle& BiomeRow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeatherController_C", "SetBiomeWindForce");

	Params::ABP_WeatherController_C_SetBiomeWindForce_Params Parms{};

	Parms.WindDirectionStrength = WindDirectionStrength;
	Parms.BiomeRow = BiomeRow;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WeatherController.BP_WeatherController_C.SetBiomeWindDirection
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     WindDirection                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBiomesRowHandle            BiomeRow                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ABP_WeatherController_C::SetBiomeWindDirection(const struct FVector& WindDirection, const struct FBiomesRowHandle& BiomeRow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeatherController_C", "SetBiomeWindDirection");

	Params::ABP_WeatherController_C_SetBiomeWindDirection_Params Parms{};

	Parms.WindDirection = WindDirection;
	Parms.BiomeRow = BiomeRow;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WeatherController.BP_WeatherController_C.SetWeatherTemperatureModifier
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              TempModifier                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBiomesRowHandle            BiomeRow                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ABP_WeatherController_C::SetWeatherTemperatureModifier(int32 TempModifier, const struct FBiomesRowHandle& BiomeRow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeatherController_C", "SetWeatherTemperatureModifier");

	Params::ABP_WeatherController_C_SetWeatherTemperatureModifier_Params Parms{};

	Parms.TempModifier = TempModifier;
	Parms.BiomeRow = BiomeRow;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WeatherController.BP_WeatherController_C.SetAIPerceptionModifier
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Modifier                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBiomesRowHandle            BiomesRowHandle                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ABP_WeatherController_C::SetAIPerceptionModifier(int32 Modifier, const struct FBiomesRowHandle& BiomesRowHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeatherController_C", "SetAIPerceptionModifier");

	Params::ABP_WeatherController_C_SetAIPerceptionModifier_Params Parms{};

	Parms.Modifier = Modifier;
	Parms.BiomesRowHandle = BiomesRowHandle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WeatherController.BP_WeatherController_C.SetDebris
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Severity                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBiomesRowHandle            BiomeRow                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ABP_WeatherController_C::SetDebris(float Severity, const struct FBiomesRowHandle& BiomeRow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeatherController_C", "SetDebris");

	Params::ABP_WeatherController_C_SetDebris_Params Parms{};

	Parms.Severity = Severity;
	Parms.BiomeRow = BiomeRow;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WeatherController.BP_WeatherController_C.SetRain
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Severity                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBiomesRowHandle            Biome                                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ABP_WeatherController_C::SetRain(float Severity, const struct FBiomesRowHandle& Biome)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeatherController_C", "SetRain");

	Params::ABP_WeatherController_C_SetRain_Params Parms{};

	Parms.Severity = Severity;
	Parms.Biome = Biome;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WeatherController.BP_WeatherController_C.PostProspectInfoFetched
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_WeatherController_C::PostProspectInfoFetched()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeatherController_C", "PostProspectInfoFetched");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_WeatherController.BP_WeatherController_C.LowHertzTick
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_WeatherController_C::LowHertzTick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeatherController_C", "LowHertzTick");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_WeatherController.BP_WeatherController_C.NotifyStormWarning
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// int32                              TimeUntilStorm                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWeatherEventsRowHandle     StormRow                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// struct FBiomesEnum                 Biome                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void ABP_WeatherController_C::NotifyStormWarning(int32 TimeUntilStorm, struct FWeatherEventsRowHandle& StormRow, struct FBiomesEnum& Biome)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeatherController_C", "NotifyStormWarning");

	Params::ABP_WeatherController_C_NotifyStormWarning_Params Parms{};

	Parms.TimeUntilStorm = TimeUntilStorm;
	Parms.StormRow = StormRow;
	Parms.Biome = Biome;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WeatherController.BP_WeatherController_C.SetAsh
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Severity                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBiomesRowHandle            BiomeRow                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ABP_WeatherController_C::SetAsh(float Severity, const struct FBiomesRowHandle& BiomeRow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeatherController_C", "SetAsh");

	Params::ABP_WeatherController_C_SetAsh_Params Parms{};

	Parms.Severity = Severity;
	Parms.BiomeRow = BiomeRow;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WeatherController.BP_WeatherController_C.SetEmbers
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Severity                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBiomesRowHandle            BiomeRow                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ABP_WeatherController_C::SetEmbers(float Severity, const struct FBiomesRowHandle& BiomeRow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeatherController_C", "SetEmbers");

	Params::ABP_WeatherController_C_SetEmbers_Params Parms{};

	Parms.Severity = Severity;
	Parms.BiomeRow = BiomeRow;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WeatherController.BP_WeatherController_C.SetSmoke
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Severity                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBiomesRowHandle            BiomeRow                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ABP_WeatherController_C::SetSmoke(float Severity, const struct FBiomesRowHandle& BiomeRow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeatherController_C", "SetSmoke");

	Params::ABP_WeatherController_C_SetSmoke_Params Parms{};

	Parms.Severity = Severity;
	Parms.BiomeRow = BiomeRow;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WeatherController.BP_WeatherController_C.SetAcidRain
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Severity                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBiomesRowHandle            BiomeRow                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ABP_WeatherController_C::SetAcidRain(float Severity, const struct FBiomesRowHandle& BiomeRow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeatherController_C", "SetAcidRain");

	Params::ABP_WeatherController_C_SetAcidRain_Params Parms{};

	Parms.Severity = Severity;
	Parms.BiomeRow = BiomeRow;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WeatherController.BP_WeatherController_C.SetHail
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Severity                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBiomesRowHandle            BiomeRow                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ABP_WeatherController_C::SetHail(float Severity, const struct FBiomesRowHandle& BiomeRow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeatherController_C", "SetHail");

	Params::ABP_WeatherController_C_SetHail_Params Parms{};

	Parms.Severity = Severity;
	Parms.BiomeRow = BiomeRow;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WeatherController.BP_WeatherController_C.SetFogDensity
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBiomesRowHandle            BiomeRow                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// float                              Severity                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WeatherController_C::SetFogDensity(const struct FBiomesRowHandle& BiomeRow, float Severity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeatherController_C", "SetFogDensity");

	Params::ABP_WeatherController_C_SetFogDensity_Params Parms{};

	Parms.BiomeRow = BiomeRow;
	Parms.Severity = Severity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WeatherController.BP_WeatherController_C.SetFogExtinction
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBiomesRowHandle            BiomeRow                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// float                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WeatherController_C::SetFogExtinction(const struct FBiomesRowHandle& BiomeRow, float Amount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeatherController_C", "SetFogExtinction");

	Params::ABP_WeatherController_C_SetFogExtinction_Params Parms{};

	Parms.BiomeRow = BiomeRow;
	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WeatherController.BP_WeatherController_C.ExecuteUbergraph_BP_WeatherController
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBiomesRowHandle            K2Node_CustomEvent_Biome_3                                       (NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_Message                                       (None)
// struct FBiomesRowHandle            K2Node_CustomEvent_Biome_2                                       (NoDestructor, HasGetValueTypeHash)
// struct FBiomesEnum                 CallFunc_RowHandleToStruct_ReturnValue                           (HasGetValueTypeHash)
// struct FBiomesEnum                 CallFunc_RowHandleToStruct_ReturnValue_1                         (HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Severity_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBiomesRowHandle            K2Node_CustomEvent_Biome_1                                       (NoDestructor, HasGetValueTypeHash)
// class UWeatherManagerComponent*    CallFunc_GetWeatherManager_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBiomesEnum                 CallFunc_RowHandleToStruct_ReturnValue_2                         (HasGetValueTypeHash)
// class UWeatherManagerComponent*    CallFunc_GetWeatherManager_ReturnValue_1                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWeatherManagerComponent*    CallFunc_GetWeatherManager_ReturnValue_2                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWeatherManagerComponent*    CallFunc_GetWeatherManager_ReturnValue_3                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWeatherManagerComponent*    CallFunc_GetWeatherManager_ReturnValue_4                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWeatherManagerComponent*    CallFunc_GetWeatherManager_ReturnValue_5                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_WindSpeed                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_WindStrength                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_WindGust                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBiomesRowHandle            K2Node_CustomEvent_BiomeRow_11                                   (NoDestructor, HasGetValueTypeHash)
// class UWeatherManagerComponent*    CallFunc_GetWeatherManager_ReturnValue_6                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBiomesEnum                 CallFunc_RowHandleToStruct_ReturnValue_3                         (HasGetValueTypeHash)
// float                              K2Node_CustomEvent_WindDirectionStrength                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBiomesRowHandle            K2Node_CustomEvent_BiomeRow_10                                   (NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_WindDirection                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBiomesRowHandle            K2Node_CustomEvent_BiomeRow_9                                    (NoDestructor, HasGetValueTypeHash)
// struct FBiomesEnum                 CallFunc_RowHandleToStruct_ReturnValue_4                         (HasGetValueTypeHash)
// struct FBiomesEnum                 CallFunc_RowHandleToStruct_ReturnValue_5                         (HasGetValueTypeHash)
// class UWeatherManagerComponent*    CallFunc_GetWeatherManager_ReturnValue_7                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWeatherManagerComponent*    CallFunc_GetWeatherManager_ReturnValue_8                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_TempModifier                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBiomesRowHandle            K2Node_CustomEvent_BiomeRow_8                                    (NoDestructor, HasGetValueTypeHash)
// class UWeatherManagerComponent*    CallFunc_GetWeatherManager_ReturnValue_9                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBiomesEnum                 CallFunc_RowHandleToStruct_ReturnValue_6                         (HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Modifier                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBiomesRowHandle            K2Node_CustomEvent_BiomesRowHandle                               (NoDestructor, HasGetValueTypeHash)
// class UWeatherManagerComponent*    CallFunc_GetWeatherManager_ReturnValue_10                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Severity_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBiomesRowHandle            K2Node_CustomEvent_BiomeRow_7                                    (NoDestructor, HasGetValueTypeHash)
// class UWeatherManagerComponent*    CallFunc_GetWeatherManager_ReturnValue_11                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBiomesEnum                 CallFunc_RowHandleToStruct_ReturnValue_7                         (HasGetValueTypeHash)
// class UWeatherManagerComponent*    CallFunc_GetWeatherManager_ReturnValue_12                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWeatherManagerComponent*    CallFunc_GetWeatherManager_ReturnValue_13                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Severity_9                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBiomesRowHandle            K2Node_CustomEvent_Biome_4                                       (NoDestructor, HasGetValueTypeHash)
// struct FBiomesEnum                 CallFunc_RowHandleToStruct_ReturnValue_8                         (HasGetValueTypeHash)
// class ADisasterController*         CallFunc_GetDisasterController_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Severity_10                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBiomesRowHandle            K2Node_CustomEvent_Biome_5                                       (NoDestructor, HasGetValueTypeHash)
// class AIcarusGameStateSurvival*    K2Node_DynamicCast_AsIcarus_Game_State_Survival                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FBiomesEnum                 CallFunc_RowHandleToStruct_ReturnValue_9                         (HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Severity_11                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBiomesRowHandle            K2Node_CustomEvent_Biome_6                                       (NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Severity_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBiomesRowHandle            K2Node_CustomEvent_Biome                                         (NoDestructor, HasGetValueTypeHash)
// struct FBiomesEnum                 CallFunc_RowHandleToStruct_ReturnValue_10                        (HasGetValueTypeHash)
// struct FBiomesEnum                 CallFunc_RowHandleToStruct_ReturnValue_11                        (HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetGameTimeSeconds_TimeSeconds                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_NumRows_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsReady_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_Seed                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_TimeUntilStorm                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWeatherEventsRowHandle     K2Node_Event_StormRow                                            (ConstParm, NoDestructor, HasGetValueTypeHash)
// struct FBiomesEnum                 K2Node_Event_Biome                                               (ConstParm, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FBiomesEnum                 K2Node_CustomEvent_Biome_7                                       (HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Severity_12                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBiomesRowHandle            K2Node_CustomEvent_Biome_8                                       (NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Severity_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBiomesRowHandle            K2Node_CustomEvent_BiomeRow_6                                    (NoDestructor, HasGetValueTypeHash)
// struct FBiomesEnum                 CallFunc_RowHandleToStruct_ReturnValue_12                        (HasGetValueTypeHash)
// struct FBiomesEnum                 CallFunc_RowHandleToStruct_ReturnValue_13                        (HasGetValueTypeHash)
// class UWeatherManagerComponent*    CallFunc_GetWeatherManager_ReturnValue_14                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_Severity_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBiomesRowHandle            K2Node_CustomEvent_BiomeRow_5                                    (NoDestructor, HasGetValueTypeHash)
// class UWeatherManagerComponent*    CallFunc_GetWeatherManager_ReturnValue_15                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBiomesEnum                 CallFunc_RowHandleToStruct_ReturnValue_14                        (HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Severity_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBiomesRowHandle            K2Node_CustomEvent_BiomeRow_4                                    (NoDestructor, HasGetValueTypeHash)
// struct FBiomesEnum                 CallFunc_RowHandleToStruct_ReturnValue_15                        (HasGetValueTypeHash)
// class UWeatherManagerComponent*    CallFunc_GetWeatherManager_ReturnValue_16                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBiomesEnum                 CallFunc_IntToStruct_ReturnValue                                 (HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Severity_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBiomesRowHandle            K2Node_CustomEvent_BiomeRow_3                                    (NoDestructor, HasGetValueTypeHash)
// class UWeatherManagerComponent*    CallFunc_GetWeatherManager_ReturnValue_17                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBiomesEnum                 CallFunc_RowHandleToStruct_ReturnValue_16                        (HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Severity_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBiomesRowHandle            K2Node_CustomEvent_BiomeRow_2                                    (NoDestructor, HasGetValueTypeHash)
// struct FBiomesEnum                 CallFunc_RowHandleToStruct_ReturnValue_17                        (HasGetValueTypeHash)
// class UWeatherManagerComponent*    CallFunc_GetWeatherManager_ReturnValue_18                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBiomesRowHandle            K2Node_CustomEvent_BiomeRow_1                                    (ConstParm, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Severity                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWeatherManagerComponent*    CallFunc_GetWeatherManager_ReturnValue_19                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBiomesEnum                 CallFunc_RowHandleToStruct_ReturnValue_18                        (HasGetValueTypeHash)
// struct FBiomesRowHandle            K2Node_CustomEvent_BiomeRow                                      (ConstParm, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Amount                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBiomesEnum                 CallFunc_RowHandleToStruct_ReturnValue_19                        (HasGetValueTypeHash)
// class UWeatherManagerComponent*    CallFunc_GetWeatherManager_ReturnValue_20                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void ABP_WeatherController_C::ExecuteUbergraph_BP_WeatherController(int32 EntryPoint, const struct FBiomesRowHandle& K2Node_CustomEvent_Biome_3, class FText K2Node_CustomEvent_Message, const struct FBiomesRowHandle& K2Node_CustomEvent_Biome_2, const struct FBiomesEnum& CallFunc_RowHandleToStruct_ReturnValue, const struct FBiomesEnum& CallFunc_RowHandleToStruct_ReturnValue_1, float K2Node_CustomEvent_Severity_8, const struct FBiomesRowHandle& K2Node_CustomEvent_Biome_1, class UWeatherManagerComponent* CallFunc_GetWeatherManager_ReturnValue, const struct FBiomesEnum& CallFunc_RowHandleToStruct_ReturnValue_2, class UWeatherManagerComponent* CallFunc_GetWeatherManager_ReturnValue_1, class UWeatherManagerComponent* CallFunc_GetWeatherManager_ReturnValue_2, class UWeatherManagerComponent* CallFunc_GetWeatherManager_ReturnValue_3, class UWeatherManagerComponent* CallFunc_GetWeatherManager_ReturnValue_4, class UWeatherManagerComponent* CallFunc_GetWeatherManager_ReturnValue_5, float K2Node_CustomEvent_WindSpeed, float K2Node_CustomEvent_WindStrength, float K2Node_CustomEvent_WindGust, const struct FBiomesRowHandle& K2Node_CustomEvent_BiomeRow_11, class UWeatherManagerComponent* CallFunc_GetWeatherManager_ReturnValue_6, const struct FBiomesEnum& CallFunc_RowHandleToStruct_ReturnValue_3, float K2Node_CustomEvent_WindDirectionStrength, const struct FBiomesRowHandle& K2Node_CustomEvent_BiomeRow_10, const struct FVector& K2Node_CustomEvent_WindDirection, const struct FBiomesRowHandle& K2Node_CustomEvent_BiomeRow_9, const struct FBiomesEnum& CallFunc_RowHandleToStruct_ReturnValue_4, const struct FBiomesEnum& CallFunc_RowHandleToStruct_ReturnValue_5, class UWeatherManagerComponent* CallFunc_GetWeatherManager_ReturnValue_7, class UWeatherManagerComponent* CallFunc_GetWeatherManager_ReturnValue_8, int32 K2Node_CustomEvent_TempModifier, const struct FBiomesRowHandle& K2Node_CustomEvent_BiomeRow_8, class UWeatherManagerComponent* CallFunc_GetWeatherManager_ReturnValue_9, const struct FBiomesEnum& CallFunc_RowHandleToStruct_ReturnValue_6, int32 K2Node_CustomEvent_Modifier, const struct FBiomesRowHandle& K2Node_CustomEvent_BiomesRowHandle, class UWeatherManagerComponent* CallFunc_GetWeatherManager_ReturnValue_10, float K2Node_CustomEvent_Severity_7, const struct FBiomesRowHandle& K2Node_CustomEvent_BiomeRow_7, class UWeatherManagerComponent* CallFunc_GetWeatherManager_ReturnValue_11, const struct FBiomesEnum& CallFunc_RowHandleToStruct_ReturnValue_7, class UWeatherManagerComponent* CallFunc_GetWeatherManager_ReturnValue_12, class UWeatherManagerComponent* CallFunc_GetWeatherManager_ReturnValue_13, float K2Node_CustomEvent_Severity_9, const struct FBiomesRowHandle& K2Node_CustomEvent_Biome_4, const struct FBiomesEnum& CallFunc_RowHandleToStruct_ReturnValue_8, class ADisasterController* CallFunc_GetDisasterController_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, float K2Node_CustomEvent_Severity_10, const struct FBiomesRowHandle& K2Node_CustomEvent_Biome_5, class AIcarusGameStateSurvival* K2Node_DynamicCast_AsIcarus_Game_State_Survival, bool K2Node_DynamicCast_bSuccess, const struct FBiomesEnum& CallFunc_RowHandleToStruct_ReturnValue_9, float K2Node_CustomEvent_Severity_11, const struct FBiomesRowHandle& K2Node_CustomEvent_Biome_6, float K2Node_CustomEvent_Severity_6, const struct FBiomesRowHandle& K2Node_CustomEvent_Biome, const struct FBiomesEnum& CallFunc_RowHandleToStruct_ReturnValue_10, const struct FBiomesEnum& CallFunc_RowHandleToStruct_ReturnValue_11, bool CallFunc_IsServer_ReturnValue, int32 CallFunc_GetGameTimeSeconds_TimeSeconds, int32 CallFunc_NumRows_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsReady_ReturnValue, int32 K2Node_CustomEvent_Seed, int32 K2Node_Event_TimeUntilStorm, const struct FWeatherEventsRowHandle& K2Node_Event_StormRow, const struct FBiomesEnum& K2Node_Event_Biome, bool CallFunc_Less_IntInt_ReturnValue, const struct FBiomesEnum& K2Node_CustomEvent_Biome_7, float K2Node_CustomEvent_Severity_12, const struct FBiomesRowHandle& K2Node_CustomEvent_Biome_8, float K2Node_CustomEvent_Severity_5, const struct FBiomesRowHandle& K2Node_CustomEvent_BiomeRow_6, const struct FBiomesEnum& CallFunc_RowHandleToStruct_ReturnValue_12, const struct FBiomesEnum& CallFunc_RowHandleToStruct_ReturnValue_13, class UWeatherManagerComponent* CallFunc_GetWeatherManager_ReturnValue_14, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, float K2Node_CustomEvent_Severity_4, const struct FBiomesRowHandle& K2Node_CustomEvent_BiomeRow_5, class UWeatherManagerComponent* CallFunc_GetWeatherManager_ReturnValue_15, const struct FBiomesEnum& CallFunc_RowHandleToStruct_ReturnValue_14, float K2Node_CustomEvent_Severity_3, const struct FBiomesRowHandle& K2Node_CustomEvent_BiomeRow_4, const struct FBiomesEnum& CallFunc_RowHandleToStruct_ReturnValue_15, class UWeatherManagerComponent* CallFunc_GetWeatherManager_ReturnValue_16, int32 Temp_int_Variable_1, const struct FBiomesEnum& CallFunc_IntToStruct_ReturnValue, float K2Node_CustomEvent_Severity_2, const struct FBiomesRowHandle& K2Node_CustomEvent_BiomeRow_3, class UWeatherManagerComponent* CallFunc_GetWeatherManager_ReturnValue_17, const struct FBiomesEnum& CallFunc_RowHandleToStruct_ReturnValue_16, float K2Node_CustomEvent_Severity_1, const struct FBiomesRowHandle& K2Node_CustomEvent_BiomeRow_2, const struct FBiomesEnum& CallFunc_RowHandleToStruct_ReturnValue_17, class UWeatherManagerComponent* CallFunc_GetWeatherManager_ReturnValue_18, const struct FBiomesRowHandle& K2Node_CustomEvent_BiomeRow_1, float K2Node_CustomEvent_Severity, class UWeatherManagerComponent* CallFunc_GetWeatherManager_ReturnValue_19, const struct FBiomesEnum& CallFunc_RowHandleToStruct_ReturnValue_18, const struct FBiomesRowHandle& K2Node_CustomEvent_BiomeRow, float K2Node_CustomEvent_Amount, const struct FBiomesEnum& CallFunc_RowHandleToStruct_ReturnValue_19, class UWeatherManagerComponent* CallFunc_GetWeatherManager_ReturnValue_20, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeatherController_C", "ExecuteUbergraph_BP_WeatherController");

	Params::ABP_WeatherController_C_ExecuteUbergraph_BP_WeatherController_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Biome_3 = K2Node_CustomEvent_Biome_3;
	Parms.K2Node_CustomEvent_Message = K2Node_CustomEvent_Message;
	Parms.K2Node_CustomEvent_Biome_2 = K2Node_CustomEvent_Biome_2;
	Parms.CallFunc_RowHandleToStruct_ReturnValue = CallFunc_RowHandleToStruct_ReturnValue;
	Parms.CallFunc_RowHandleToStruct_ReturnValue_1 = CallFunc_RowHandleToStruct_ReturnValue_1;
	Parms.K2Node_CustomEvent_Severity_8 = K2Node_CustomEvent_Severity_8;
	Parms.K2Node_CustomEvent_Biome_1 = K2Node_CustomEvent_Biome_1;
	Parms.CallFunc_GetWeatherManager_ReturnValue = CallFunc_GetWeatherManager_ReturnValue;
	Parms.CallFunc_RowHandleToStruct_ReturnValue_2 = CallFunc_RowHandleToStruct_ReturnValue_2;
	Parms.CallFunc_GetWeatherManager_ReturnValue_1 = CallFunc_GetWeatherManager_ReturnValue_1;
	Parms.CallFunc_GetWeatherManager_ReturnValue_2 = CallFunc_GetWeatherManager_ReturnValue_2;
	Parms.CallFunc_GetWeatherManager_ReturnValue_3 = CallFunc_GetWeatherManager_ReturnValue_3;
	Parms.CallFunc_GetWeatherManager_ReturnValue_4 = CallFunc_GetWeatherManager_ReturnValue_4;
	Parms.CallFunc_GetWeatherManager_ReturnValue_5 = CallFunc_GetWeatherManager_ReturnValue_5;
	Parms.K2Node_CustomEvent_WindSpeed = K2Node_CustomEvent_WindSpeed;
	Parms.K2Node_CustomEvent_WindStrength = K2Node_CustomEvent_WindStrength;
	Parms.K2Node_CustomEvent_WindGust = K2Node_CustomEvent_WindGust;
	Parms.K2Node_CustomEvent_BiomeRow_11 = K2Node_CustomEvent_BiomeRow_11;
	Parms.CallFunc_GetWeatherManager_ReturnValue_6 = CallFunc_GetWeatherManager_ReturnValue_6;
	Parms.CallFunc_RowHandleToStruct_ReturnValue_3 = CallFunc_RowHandleToStruct_ReturnValue_3;
	Parms.K2Node_CustomEvent_WindDirectionStrength = K2Node_CustomEvent_WindDirectionStrength;
	Parms.K2Node_CustomEvent_BiomeRow_10 = K2Node_CustomEvent_BiomeRow_10;
	Parms.K2Node_CustomEvent_WindDirection = K2Node_CustomEvent_WindDirection;
	Parms.K2Node_CustomEvent_BiomeRow_9 = K2Node_CustomEvent_BiomeRow_9;
	Parms.CallFunc_RowHandleToStruct_ReturnValue_4 = CallFunc_RowHandleToStruct_ReturnValue_4;
	Parms.CallFunc_RowHandleToStruct_ReturnValue_5 = CallFunc_RowHandleToStruct_ReturnValue_5;
	Parms.CallFunc_GetWeatherManager_ReturnValue_7 = CallFunc_GetWeatherManager_ReturnValue_7;
	Parms.CallFunc_GetWeatherManager_ReturnValue_8 = CallFunc_GetWeatherManager_ReturnValue_8;
	Parms.K2Node_CustomEvent_TempModifier = K2Node_CustomEvent_TempModifier;
	Parms.K2Node_CustomEvent_BiomeRow_8 = K2Node_CustomEvent_BiomeRow_8;
	Parms.CallFunc_GetWeatherManager_ReturnValue_9 = CallFunc_GetWeatherManager_ReturnValue_9;
	Parms.CallFunc_RowHandleToStruct_ReturnValue_6 = CallFunc_RowHandleToStruct_ReturnValue_6;
	Parms.K2Node_CustomEvent_Modifier = K2Node_CustomEvent_Modifier;
	Parms.K2Node_CustomEvent_BiomesRowHandle = K2Node_CustomEvent_BiomesRowHandle;
	Parms.CallFunc_GetWeatherManager_ReturnValue_10 = CallFunc_GetWeatherManager_ReturnValue_10;
	Parms.K2Node_CustomEvent_Severity_7 = K2Node_CustomEvent_Severity_7;
	Parms.K2Node_CustomEvent_BiomeRow_7 = K2Node_CustomEvent_BiomeRow_7;
	Parms.CallFunc_GetWeatherManager_ReturnValue_11 = CallFunc_GetWeatherManager_ReturnValue_11;
	Parms.CallFunc_RowHandleToStruct_ReturnValue_7 = CallFunc_RowHandleToStruct_ReturnValue_7;
	Parms.CallFunc_GetWeatherManager_ReturnValue_12 = CallFunc_GetWeatherManager_ReturnValue_12;
	Parms.CallFunc_GetWeatherManager_ReturnValue_13 = CallFunc_GetWeatherManager_ReturnValue_13;
	Parms.K2Node_CustomEvent_Severity_9 = K2Node_CustomEvent_Severity_9;
	Parms.K2Node_CustomEvent_Biome_4 = K2Node_CustomEvent_Biome_4;
	Parms.CallFunc_RowHandleToStruct_ReturnValue_8 = CallFunc_RowHandleToStruct_ReturnValue_8;
	Parms.CallFunc_GetDisasterController_ReturnValue = CallFunc_GetDisasterController_ReturnValue;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_CustomEvent_Severity_10 = K2Node_CustomEvent_Severity_10;
	Parms.K2Node_CustomEvent_Biome_5 = K2Node_CustomEvent_Biome_5;
	Parms.K2Node_DynamicCast_AsIcarus_Game_State_Survival = K2Node_DynamicCast_AsIcarus_Game_State_Survival;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_RowHandleToStruct_ReturnValue_9 = CallFunc_RowHandleToStruct_ReturnValue_9;
	Parms.K2Node_CustomEvent_Severity_11 = K2Node_CustomEvent_Severity_11;
	Parms.K2Node_CustomEvent_Biome_6 = K2Node_CustomEvent_Biome_6;
	Parms.K2Node_CustomEvent_Severity_6 = K2Node_CustomEvent_Severity_6;
	Parms.K2Node_CustomEvent_Biome = K2Node_CustomEvent_Biome;
	Parms.CallFunc_RowHandleToStruct_ReturnValue_10 = CallFunc_RowHandleToStruct_ReturnValue_10;
	Parms.CallFunc_RowHandleToStruct_ReturnValue_11 = CallFunc_RowHandleToStruct_ReturnValue_11;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_GetGameTimeSeconds_TimeSeconds = CallFunc_GetGameTimeSeconds_TimeSeconds;
	Parms.CallFunc_NumRows_ReturnValue = CallFunc_NumRows_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsReady_ReturnValue = CallFunc_IsReady_ReturnValue;
	Parms.K2Node_CustomEvent_Seed = K2Node_CustomEvent_Seed;
	Parms.K2Node_Event_TimeUntilStorm = K2Node_Event_TimeUntilStorm;
	Parms.K2Node_Event_StormRow = K2Node_Event_StormRow;
	Parms.K2Node_Event_Biome = K2Node_Event_Biome;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_CustomEvent_Biome_7 = K2Node_CustomEvent_Biome_7;
	Parms.K2Node_CustomEvent_Severity_12 = K2Node_CustomEvent_Severity_12;
	Parms.K2Node_CustomEvent_Biome_8 = K2Node_CustomEvent_Biome_8;
	Parms.K2Node_CustomEvent_Severity_5 = K2Node_CustomEvent_Severity_5;
	Parms.K2Node_CustomEvent_BiomeRow_6 = K2Node_CustomEvent_BiomeRow_6;
	Parms.CallFunc_RowHandleToStruct_ReturnValue_12 = CallFunc_RowHandleToStruct_ReturnValue_12;
	Parms.CallFunc_RowHandleToStruct_ReturnValue_13 = CallFunc_RowHandleToStruct_ReturnValue_13;
	Parms.CallFunc_GetWeatherManager_ReturnValue_14 = CallFunc_GetWeatherManager_ReturnValue_14;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.K2Node_CustomEvent_Severity_4 = K2Node_CustomEvent_Severity_4;
	Parms.K2Node_CustomEvent_BiomeRow_5 = K2Node_CustomEvent_BiomeRow_5;
	Parms.CallFunc_GetWeatherManager_ReturnValue_15 = CallFunc_GetWeatherManager_ReturnValue_15;
	Parms.CallFunc_RowHandleToStruct_ReturnValue_14 = CallFunc_RowHandleToStruct_ReturnValue_14;
	Parms.K2Node_CustomEvent_Severity_3 = K2Node_CustomEvent_Severity_3;
	Parms.K2Node_CustomEvent_BiomeRow_4 = K2Node_CustomEvent_BiomeRow_4;
	Parms.CallFunc_RowHandleToStruct_ReturnValue_15 = CallFunc_RowHandleToStruct_ReturnValue_15;
	Parms.CallFunc_GetWeatherManager_ReturnValue_16 = CallFunc_GetWeatherManager_ReturnValue_16;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_IntToStruct_ReturnValue = CallFunc_IntToStruct_ReturnValue;
	Parms.K2Node_CustomEvent_Severity_2 = K2Node_CustomEvent_Severity_2;
	Parms.K2Node_CustomEvent_BiomeRow_3 = K2Node_CustomEvent_BiomeRow_3;
	Parms.CallFunc_GetWeatherManager_ReturnValue_17 = CallFunc_GetWeatherManager_ReturnValue_17;
	Parms.CallFunc_RowHandleToStruct_ReturnValue_16 = CallFunc_RowHandleToStruct_ReturnValue_16;
	Parms.K2Node_CustomEvent_Severity_1 = K2Node_CustomEvent_Severity_1;
	Parms.K2Node_CustomEvent_BiomeRow_2 = K2Node_CustomEvent_BiomeRow_2;
	Parms.CallFunc_RowHandleToStruct_ReturnValue_17 = CallFunc_RowHandleToStruct_ReturnValue_17;
	Parms.CallFunc_GetWeatherManager_ReturnValue_18 = CallFunc_GetWeatherManager_ReturnValue_18;
	Parms.K2Node_CustomEvent_BiomeRow_1 = K2Node_CustomEvent_BiomeRow_1;
	Parms.K2Node_CustomEvent_Severity = K2Node_CustomEvent_Severity;
	Parms.CallFunc_GetWeatherManager_ReturnValue_19 = CallFunc_GetWeatherManager_ReturnValue_19;
	Parms.CallFunc_RowHandleToStruct_ReturnValue_18 = CallFunc_RowHandleToStruct_ReturnValue_18;
	Parms.K2Node_CustomEvent_BiomeRow = K2Node_CustomEvent_BiomeRow;
	Parms.K2Node_CustomEvent_Amount = K2Node_CustomEvent_Amount;
	Parms.CallFunc_RowHandleToStruct_ReturnValue_19 = CallFunc_RowHandleToStruct_ReturnValue_19;
	Parms.CallFunc_GetWeatherManager_ReturnValue_20 = CallFunc_GetWeatherManager_ReturnValue_20;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WeatherController.BP_WeatherController_C.AIPerceptionModifierUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBiomesRowHandle            Biome                                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ABP_WeatherController_C::AIPerceptionModifierUpdated__DelegateSignature(int32 NewValue, const struct FBiomesRowHandle& Biome)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeatherController_C", "AIPerceptionModifierUpdated__DelegateSignature");

	Params::ABP_WeatherController_C_AIPerceptionModifierUpdated__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;
	Parms.Biome = Biome;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WeatherController.BP_WeatherController_C.StormStartedAlert__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FWeatherEventsRowHandle     Event                                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FBiomesEnum                 Biome                                                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_WeatherController_C::StormStartedAlert__DelegateSignature(const struct FWeatherEventsRowHandle& Event, const struct FBiomesEnum& Biome)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeatherController_C", "StormStartedAlert__DelegateSignature");

	Params::ABP_WeatherController_C_StormStartedAlert__DelegateSignature_Params Parms{};

	Parms.Event = Event;
	Parms.Biome = Biome;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WeatherController.BP_WeatherController_C.StormIncomingAlert__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              TimeUntilStorm                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWeatherEventsRowHandle     StormRow                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FBiomesEnum                 Biome                                                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_WeatherController_C::StormIncomingAlert__DelegateSignature(int32 TimeUntilStorm, const struct FWeatherEventsRowHandle& StormRow, const struct FBiomesEnum& Biome)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeatherController_C", "StormIncomingAlert__DelegateSignature");

	Params::ABP_WeatherController_C_StormIncomingAlert__DelegateSignature_Params Parms{};

	Parms.TimeUntilStorm = TimeUntilStorm;
	Parms.StormRow = StormRow;
	Parms.Biome = Biome;

	UObject::ProcessEvent(Func, &Parms);

}

}



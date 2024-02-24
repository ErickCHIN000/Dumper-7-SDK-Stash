#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DisasterController.BP_DisasterController_C
// (Actor)

class UClass* ABP_DisasterController_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DisasterController_C");

	return Clss;
}


// BP_DisasterController_C BP_DisasterController.Default__BP_DisasterController_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_DisasterController_C* ABP_DisasterController_C::GetDefaultObj()
{
	static class ABP_DisasterController_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_DisasterController_C*>(ABP_DisasterController_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_DisasterController.BP_DisasterController_C.DropShipAtomiseFoliage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Radius                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagQuery           CallFunc_MakeGameplayTagQuery_ReturnValue                        (None)
// TArray<struct FFLODInstanceID>     CallFunc_GetFLODInstancesOverlappingSphere_ReturnValue           (ReferenceParm)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFLODInstanceID             CallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_FindActorFromInstanceID_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<int32>                      K2Node_MakeArray_Array                                           (ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFLODRecord*                 CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_DisasterController_C::DropShipAtomiseFoliage(const struct FVector& Location, float Radius, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsServer_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const struct FGameplayTagQuery& CallFunc_MakeGameplayTagQuery_ReturnValue, TArray<struct FFLODInstanceID>& CallFunc_GetFLODInstancesOverlappingSphere_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FFLODInstanceID& CallFunc_Array_Get_Item, class AActor* CallFunc_FindActorFromInstanceID_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<int32>& K2Node_MakeArray_Array, bool CallFunc_IsValid_ReturnValue_1, class UFLODRecord* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DisasterController_C", "DropShipAtomiseFoliage");

	Params::ABP_DisasterController_C_DropShipAtomiseFoliage_Params Parms{};

	Parms.Location = Location;
	Parms.Radius = Radius;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_MakeGameplayTagQuery_ReturnValue = CallFunc_MakeGameplayTagQuery_ReturnValue;
	Parms.CallFunc_GetFLODInstancesOverlappingSphere_ReturnValue = CallFunc_GetFLODInstancesOverlappingSphere_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_FindActorFromInstanceID_ReturnValue = CallFunc_FindActorFromInstanceID_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DisasterController.BP_DisasterController_C.DropShipSmashTrees
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Radius                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFLODInstanceID>     UniquedArray                                                     (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagQuery           CallFunc_MakeGameplayTagQuery_ReturnValue                        (None)
// TArray<struct FFLODInstanceID>     CallFunc_GetFLODInstancesOverlappingSphere_ReturnValue           (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFLODInstanceID             CallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFLODRecord*                 CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetInstanceTransform_OutInstanceTransform               (IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetInstanceTransform_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Normal_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTreeToppleInfo             K2Node_MakeStruct_TreeToppleInfo                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DisasterController_C::DropShipSmashTrees(const struct FVector& Location, float Radius, const TArray<struct FFLODInstanceID>& UniquedArray, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsServer_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FGameplayTagQuery& CallFunc_MakeGameplayTagQuery_ReturnValue, TArray<struct FFLODInstanceID>& CallFunc_GetFLODInstancesOverlappingSphere_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FFLODInstanceID& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFLODRecord* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FTransform& CallFunc_GetInstanceTransform_OutInstanceTransform, bool CallFunc_GetInstanceTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FTreeToppleInfo& K2Node_MakeStruct_TreeToppleInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DisasterController_C", "DropShipSmashTrees");

	Params::ABP_DisasterController_C_DropShipSmashTrees_Params Parms{};

	Parms.Location = Location;
	Parms.Radius = Radius;
	Parms.UniquedArray = UniquedArray;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_MakeGameplayTagQuery_ReturnValue = CallFunc_MakeGameplayTagQuery_ReturnValue;
	Parms.CallFunc_GetFLODInstancesOverlappingSphere_ReturnValue = CallFunc_GetFLODInstancesOverlappingSphere_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetInstanceTransform_OutInstanceTransform = CallFunc_GetInstanceTransform_OutInstanceTransform;
	Parms.CallFunc_GetInstanceTransform_ReturnValue = CallFunc_GetInstanceTransform_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_Normal_ReturnValue = CallFunc_Normal_ReturnValue;
	Parms.K2Node_MakeStruct_TreeToppleInfo = K2Node_MakeStruct_TreeToppleInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DisasterController.BP_DisasterController_C.TreeToppleCooldownEnded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_DisasterController_C::TreeToppleCooldownEnded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DisasterController_C", "TreeToppleCooldownEnded");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DisasterController.BP_DisasterController_C.OnWeatherActionCompleted
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBiomesRowHandle            Biome                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// struct FWeatherEventsRowHandle     Event                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// class AScriptedEvent*              EventToAbort                                                     (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBiomesEnum                 CallFunc_RowHandleToStruct_ReturnValue                           (HasGetValueTypeHash)
// class FText                        CallFunc_Conv_NameToText_ReturnValue                             (None)
// bool                               CallFunc_Map_Remove_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class AScriptedEvent*              CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_ObjectToText_ReturnValue                           (None)
// TArray<struct FBiomesEnum>         CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// struct FBiomesEnum                 CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// bool                               CallFunc_Map_Remove_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class AScriptedEvent*              CallFunc_Map_Find_Value_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AWeatherController*          CallFunc_GetWeatherController_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetActiveWeatherInfoForBiome_OutValidity                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActiveWeatherInfo          CallFunc_GetActiveWeatherInfoForBiome_ReturnValue                (ContainsInstancedReference)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UIcarusWeatherAction*        CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Map_Remove_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FScriptedEventsRowHandle    CallFunc_Map_Find_Value_2                                        (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UIcarusWeatherAction*>CallFunc_Map_Keys_Keys_1                                         (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UIcarusWeatherAction*        CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Max_ReturnValue_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Remove_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_DisasterController_C::OnWeatherActionCompleted(struct FBiomesRowHandle& Biome, struct FWeatherEventsRowHandle& Event, class AScriptedEvent* EventToAbort, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, const struct FBiomesEnum& CallFunc_RowHandleToStruct_ReturnValue, class FText CallFunc_Conv_NameToText_ReturnValue, bool CallFunc_Map_Remove_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class AScriptedEvent* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class FText CallFunc_Conv_ObjectToText_ReturnValue, TArray<struct FBiomesEnum>& CallFunc_Map_Keys_Keys, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const struct FBiomesEnum& CallFunc_Array_Get_Item, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_Map_Remove_ReturnValue_1, class FText CallFunc_Format_ReturnValue, class AScriptedEvent* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Max_ReturnValue, class AWeatherController* CallFunc_GetWeatherController_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, enum class EValid CallFunc_GetActiveWeatherInfoForBiome_OutValidity, const struct FActiveWeatherInfo& CallFunc_GetActiveWeatherInfoForBiome_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_2, class UIcarusWeatherAction* CallFunc_Array_Get_Item_1, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_Map_Remove_ReturnValue_2, const struct FScriptedEventsRowHandle& CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, TArray<class UIcarusWeatherAction*>& CallFunc_Map_Keys_Keys_1, int32 CallFunc_Array_Length_ReturnValue_1, class UIcarusWeatherAction* CallFunc_Array_Get_Item_2, int32 CallFunc_Subtract_IntInt_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_2, int32 CallFunc_Max_ReturnValue_1, bool CallFunc_Map_Remove_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DisasterController_C", "OnWeatherActionCompleted");

	Params::ABP_DisasterController_C_OnWeatherActionCompleted_Params Parms{};

	Parms.Biome = Biome;
	Parms.Event = Event;
	Parms.EventToAbort = EventToAbort;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_RowHandleToStruct_ReturnValue = CallFunc_RowHandleToStruct_ReturnValue;
	Parms.CallFunc_Conv_NameToText_ReturnValue = CallFunc_Conv_NameToText_ReturnValue;
	Parms.CallFunc_Map_Remove_ReturnValue = CallFunc_Map_Remove_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Conv_ObjectToText_ReturnValue = CallFunc_Conv_ObjectToText_ReturnValue;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Map_Remove_ReturnValue_1 = CallFunc_Map_Remove_ReturnValue_1;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.CallFunc_GetWeatherController_ReturnValue = CallFunc_GetWeatherController_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_GetActiveWeatherInfoForBiome_OutValidity = CallFunc_GetActiveWeatherInfoForBiome_OutValidity;
	Parms.CallFunc_GetActiveWeatherInfoForBiome_ReturnValue = CallFunc_GetActiveWeatherInfoForBiome_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_2 = CallFunc_Subtract_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Map_Remove_ReturnValue_2 = CallFunc_Map_Remove_ReturnValue_2;
	Parms.CallFunc_Map_Find_Value_2 = CallFunc_Map_Find_Value_2;
	Parms.CallFunc_Map_Find_ReturnValue_2 = CallFunc_Map_Find_ReturnValue_2;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_1 = CallFunc_GreaterEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_Map_Keys_Keys_1 = CallFunc_Map_Keys_Keys_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_3 = CallFunc_Subtract_IntInt_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_Max_ReturnValue_1 = CallFunc_Max_ReturnValue_1;
	Parms.CallFunc_Map_Remove_ReturnValue_3 = CallFunc_Map_Remove_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DisasterController.BP_DisasterController_C.BeginScriptedEvent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptedEventsRowHandle    Event                                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FBiomesRowHandle            AssociatedBiome                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FBiomesEnum                 CallFunc_RowHandleToStruct_ReturnValue                           (HasGetValueTypeHash)
// struct FScriptedEventData          CallFunc_GetScriptedEventsStruct_ScriptedEvents                  (None)
// enum class EValid                  CallFunc_GetScriptedEventsStruct_Paths                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsRowHandleValid_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_LoadClassAsset_Blocking_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsScripted_Event                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AScriptedEvent*              CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DisasterController_C::BeginScriptedEvent(const struct FScriptedEventsRowHandle& Event, const struct FBiomesRowHandle& AssociatedBiome, const struct FBiomesEnum& CallFunc_RowHandleToStruct_ReturnValue, const struct FScriptedEventData& CallFunc_GetScriptedEventsStruct_ScriptedEvents, enum class EValid CallFunc_GetScriptedEventsStruct_Paths, bool CallFunc_IsRowHandleValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class UClass* CallFunc_LoadClassAsset_Blocking_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsScripted_Event, bool K2Node_ClassDynamicCast_bSuccess, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AScriptedEvent* CallFunc_FinishSpawningActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DisasterController_C", "BeginScriptedEvent");

	Params::ABP_DisasterController_C_BeginScriptedEvent_Params Parms{};

	Parms.Event = Event;
	Parms.AssociatedBiome = AssociatedBiome;
	Parms.CallFunc_RowHandleToStruct_ReturnValue = CallFunc_RowHandleToStruct_ReturnValue;
	Parms.CallFunc_GetScriptedEventsStruct_ScriptedEvents = CallFunc_GetScriptedEventsStruct_ScriptedEvents;
	Parms.CallFunc_GetScriptedEventsStruct_Paths = CallFunc_GetScriptedEventsStruct_Paths;
	Parms.CallFunc_IsRowHandleValid_ReturnValue = CallFunc_IsRowHandleValid_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_LoadClassAsset_Blocking_ReturnValue = CallFunc_LoadClassAsset_Blocking_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsScripted_Event = K2Node_ClassDynamicCast_AsScripted_Event;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DisasterController.BP_DisasterController_C.OnWeatherEventStarted
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBiomesRowHandle            Biome                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// struct FWeatherEventsRowHandle     Event                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// int32                              ChosenWeatherActionIndex                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CurrentListUID                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FScriptedEventSetup         ChosenEvent                                                      (Edit, BlueprintVisible)
// TArray<struct FScriptedEventSetup> PossibleEvents                                                   (Edit, BlueprintVisible)
// struct FIcarusWeatherEvent         CallFunc_GetWeatherEventsStruct_WeatherEvents                    (None)
// enum class EValid                  CallFunc_GetWeatherEventsStruct_Paths                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FScriptedEventSetup         CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class FText                        CallFunc_Conv_NameToText_ReturnValue                             (None)
// class FText                        CallFunc_Conv_NameToText_ReturnValue_1                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_NameToText_ReturnValue_2                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_4                           (HasGetValueTypeHash)
// class FText                        CallFunc_Conv_NameToText_ReturnValue_3                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_5                           (HasGetValueTypeHash)
// TArray<int32>                      CallFunc_Set_ToArray_Result                                      (ReferenceParm)
// struct FWeightedListElement        CallFunc_GetSelectedElement_ReturnValue                          (None)
// int32                              CallFunc_Array_RandomFromStream_OutItem                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_RandomFromStream_OutIndex                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_StringToInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FScriptedEventSetup         CallFunc_Array_Get_Item_1                                        (None)
// struct FScriptedEventSetup         CallFunc_Array_Get_Item_2                                        (None)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWeightedListElement        K2Node_MakeStruct_WeightedListElement                            (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_AddElement_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_RandomIntegerFromStream_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_CreateNewList_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatFromStream_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AWeatherController*          CallFunc_GetWeatherController_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EValid                  CallFunc_GetActiveWeatherInfoForBiome_OutValidity                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActiveWeatherInfo          CallFunc_GetActiveWeatherInfoForBiome_ReturnValue                (ContainsInstancedReference)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UIcarusWeatherAction*        CallFunc_Array_Get_Item_3                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue_3                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_NameToText_ReturnValue_4                           (None)
// class FText                        CallFunc_Conv_NameToText_ReturnValue_5                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_6                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_7                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)

void ABP_DisasterController_C::OnWeatherEventStarted(struct FBiomesRowHandle& Biome, struct FWeatherEventsRowHandle& Event, int32 ChosenWeatherActionIndex, int32 CurrentListUID, const struct FScriptedEventSetup& ChosenEvent, const TArray<struct FScriptedEventSetup>& PossibleEvents, const struct FIcarusWeatherEvent& CallFunc_GetWeatherEventsStruct_WeatherEvents, enum class EValid CallFunc_GetWeatherEventsStruct_Paths, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Array_IsValidIndex_ReturnValue, const struct FScriptedEventSetup& CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, const class FString& CallFunc_Conv_IntToString_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_Conv_NameToText_ReturnValue, class FText CallFunc_Conv_NameToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class FText CallFunc_Conv_NameToText_ReturnValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, class FText CallFunc_Conv_NameToText_ReturnValue_3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_5, TArray<int32>& CallFunc_Set_ToArray_Result, const struct FWeightedListElement& CallFunc_GetSelectedElement_ReturnValue, int32 CallFunc_Array_RandomFromStream_OutItem, int32 CallFunc_Array_RandomFromStream_OutIndex, int32 CallFunc_Conv_StringToInt_ReturnValue, const struct FScriptedEventSetup& CallFunc_Array_Get_Item_1, const struct FScriptedEventSetup& CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_1, const struct FWeightedListElement& K2Node_MakeStruct_WeightedListElement, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue_2, bool CallFunc_AddElement_ReturnValue, int32 CallFunc_RandomIntegerFromStream_ReturnValue, int32 CallFunc_CreateNewList_ReturnValue, float CallFunc_RandomFloatFromStream_ReturnValue, class AWeatherController* CallFunc_GetWeatherController_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, enum class EValid CallFunc_GetActiveWeatherInfoForBiome_OutValidity, const struct FActiveWeatherInfo& CallFunc_GetActiveWeatherInfoForBiome_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, class UIcarusWeatherAction* CallFunc_Array_Get_Item_3, bool CallFunc_Array_IsValidIndex_ReturnValue_3, class FText CallFunc_Conv_NameToText_ReturnValue_4, class FText CallFunc_Conv_NameToText_ReturnValue_5, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_6, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_7, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Format_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DisasterController_C", "OnWeatherEventStarted");

	Params::ABP_DisasterController_C_OnWeatherEventStarted_Params Parms{};

	Parms.Biome = Biome;
	Parms.Event = Event;
	Parms.ChosenWeatherActionIndex = ChosenWeatherActionIndex;
	Parms.CurrentListUID = CurrentListUID;
	Parms.ChosenEvent = ChosenEvent;
	Parms.PossibleEvents = PossibleEvents;
	Parms.CallFunc_GetWeatherEventsStruct_WeatherEvents = CallFunc_GetWeatherEventsStruct_WeatherEvents;
	Parms.CallFunc_GetWeatherEventsStruct_Paths = CallFunc_GetWeatherEventsStruct_Paths;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue_1 = CallFunc_Array_IsValidIndex_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_Conv_NameToText_ReturnValue = CallFunc_Conv_NameToText_ReturnValue;
	Parms.CallFunc_Conv_NameToText_ReturnValue_1 = CallFunc_Conv_NameToText_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.K2Node_MakeStruct_FormatArgumentData_3 = K2Node_MakeStruct_FormatArgumentData_3;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Conv_NameToText_ReturnValue_2 = CallFunc_Conv_NameToText_ReturnValue_2;
	Parms.K2Node_MakeStruct_FormatArgumentData_4 = K2Node_MakeStruct_FormatArgumentData_4;
	Parms.CallFunc_Conv_NameToText_ReturnValue_3 = CallFunc_Conv_NameToText_ReturnValue_3;
	Parms.K2Node_MakeStruct_FormatArgumentData_5 = K2Node_MakeStruct_FormatArgumentData_5;
	Parms.CallFunc_Set_ToArray_Result = CallFunc_Set_ToArray_Result;
	Parms.CallFunc_GetSelectedElement_ReturnValue = CallFunc_GetSelectedElement_ReturnValue;
	Parms.CallFunc_Array_RandomFromStream_OutItem = CallFunc_Array_RandomFromStream_OutItem;
	Parms.CallFunc_Array_RandomFromStream_OutIndex = CallFunc_Array_RandomFromStream_OutIndex;
	Parms.CallFunc_Conv_StringToInt_ReturnValue = CallFunc_Conv_StringToInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.K2Node_MakeStruct_WeightedListElement = K2Node_MakeStruct_WeightedListElement;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue_2 = CallFunc_Array_IsValidIndex_ReturnValue_2;
	Parms.CallFunc_AddElement_ReturnValue = CallFunc_AddElement_ReturnValue;
	Parms.CallFunc_RandomIntegerFromStream_ReturnValue = CallFunc_RandomIntegerFromStream_ReturnValue;
	Parms.CallFunc_CreateNewList_ReturnValue = CallFunc_CreateNewList_ReturnValue;
	Parms.CallFunc_RandomFloatFromStream_ReturnValue = CallFunc_RandomFloatFromStream_ReturnValue;
	Parms.CallFunc_GetWeatherController_ReturnValue = CallFunc_GetWeatherController_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_GetActiveWeatherInfoForBiome_OutValidity = CallFunc_GetActiveWeatherInfoForBiome_OutValidity;
	Parms.CallFunc_GetActiveWeatherInfoForBiome_ReturnValue = CallFunc_GetActiveWeatherInfoForBiome_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue_3 = CallFunc_Array_IsValidIndex_ReturnValue_3;
	Parms.CallFunc_Conv_NameToText_ReturnValue_4 = CallFunc_Conv_NameToText_ReturnValue_4;
	Parms.CallFunc_Conv_NameToText_ReturnValue_5 = CallFunc_Conv_NameToText_ReturnValue_5;
	Parms.K2Node_MakeStruct_FormatArgumentData_6 = K2Node_MakeStruct_FormatArgumentData_6;
	Parms.K2Node_MakeStruct_FormatArgumentData_7 = K2Node_MakeStruct_FormatArgumentData_7;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DisasterController.BP_DisasterController_C.GetUncoveredPlayer
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ABP_IcarusPlayerCharacterSurvival_C*>BiomeCharacters                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class ABP_IcarusPlayerCharacterSurvival_C*TargetCharacter                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_IcarusPlayerCharacterSurvival_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlayerCovered_Covered                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DisasterController_C::GetUncoveredPlayer(TArray<class ABP_IcarusPlayerCharacterSurvival_C*>& BiomeCharacters, class ABP_IcarusPlayerCharacterSurvival_C** TargetCharacter, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class ABP_IcarusPlayerCharacterSurvival_C* CallFunc_Array_Get_Item, bool CallFunc_IsPlayerCovered_Covered, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DisasterController_C", "GetUncoveredPlayer");

	Params::ABP_DisasterController_C_GetUncoveredPlayer_Params Parms{};

	Parms.BiomeCharacters = BiomeCharacters;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsPlayerCovered_Covered = CallFunc_IsPlayerCovered_Covered;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (TargetCharacter != nullptr)
		*TargetCharacter = Parms.TargetCharacter;

}


// Function BP_DisasterController.BP_DisasterController_C.IsLightningRodCloser
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      CurrentTarget                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               LightningRod                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      ChosenTarget                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_LightningRod_Base_C*     LightningRodFound                                                (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_LightningRod_Base_C*>CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// class ABP_LightningRod_Base_C*     CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Vector_Distance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_DisasterController_C::IsLightningRodCloser(class AActor* CurrentTarget, bool* LightningRod, class AActor** ChosenTarget, class ABP_LightningRod_Base_C* LightningRodFound, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class ABP_LightningRod_Base_C*>& CallFunc_GetAllActorsOfClass_OutActors, class ABP_LightningRod_Base_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_Vector_Distance_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DisasterController_C", "IsLightningRodCloser");

	Params::ABP_DisasterController_C_IsLightningRodCloser_Params Parms{};

	Parms.CurrentTarget = CurrentTarget;
	Parms.LightningRodFound = LightningRodFound;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_Vector_Distance_ReturnValue = CallFunc_Vector_Distance_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (LightningRod != nullptr)
		*LightningRod = Parms.LightningRod;

	if (ChosenTarget != nullptr)
		*ChosenTarget = Parms.ChosenTarget;

}


// Function BP_DisasterController.BP_DisasterController_C.StopStormTreeToppling
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBiomesEnum                 Biome                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_EnumEnum_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FBiomesEnum                 CallFunc_MakeBiomesEnum_ReturnValue                              (HasGetValueTypeHash)
// struct FBiomesEnum                 K2Node_Select_Default                                            (ConstParm, HasGetValueTypeHash)
// bool                               CallFunc_Map_Remove_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_DisasterController_C::StopStormTreeToppling(const struct FBiomesEnum& Biome, bool Temp_bool_Variable, bool CallFunc_EqualEqual_EnumEnum_ReturnValue, const struct FBiomesEnum& CallFunc_MakeBiomesEnum_ReturnValue, const struct FBiomesEnum& K2Node_Select_Default, bool CallFunc_Map_Remove_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DisasterController_C", "StopStormTreeToppling");

	Params::ABP_DisasterController_C_StopStormTreeToppling_Params Parms{};

	Parms.Biome = Biome;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_EqualEqual_EnumEnum_ReturnValue = CallFunc_EqualEqual_EnumEnum_ReturnValue;
	Parms.CallFunc_MakeBiomesEnum_ReturnValue = CallFunc_MakeBiomesEnum_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Map_Remove_ReturnValue = CallFunc_Map_Remove_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DisasterController.BP_DisasterController_C.StartStormTreeToppling
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     WindDirection                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              MinInterval                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              MaxInterval                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              WindStrengthThreshold                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBiomesEnum                 Biome                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_EnumEnum_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_RollNextEventTime_NextStrikeTime                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBiomesEnum                 CallFunc_MakeBiomesEnum_ReturnValue                              (HasGetValueTypeHash)
// struct FFBiomeStormWindInfo        K2Node_MakeStruct_FBiomeStormWindInfo                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FBiomesEnum                 K2Node_Select_Default                                            (ConstParm, HasGetValueTypeHash)

void ABP_DisasterController_C::StartStormTreeToppling(const struct FVector& WindDirection, float MinInterval, float MaxInterval, float WindStrengthThreshold, const struct FBiomesEnum& Biome, bool CallFunc_EqualEqual_EnumEnum_ReturnValue, int32 CallFunc_RollNextEventTime_NextStrikeTime, const struct FBiomesEnum& CallFunc_MakeBiomesEnum_ReturnValue, const struct FFBiomeStormWindInfo& K2Node_MakeStruct_FBiomeStormWindInfo, bool Temp_bool_Variable, const struct FBiomesEnum& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DisasterController_C", "StartStormTreeToppling");

	Params::ABP_DisasterController_C_StartStormTreeToppling_Params Parms{};

	Parms.WindDirection = WindDirection;
	Parms.MinInterval = MinInterval;
	Parms.MaxInterval = MaxInterval;
	Parms.WindStrengthThreshold = WindStrengthThreshold;
	Parms.Biome = Biome;
	Parms.CallFunc_EqualEqual_EnumEnum_ReturnValue = CallFunc_EqualEqual_EnumEnum_ReturnValue;
	Parms.CallFunc_RollNextEventTime_NextStrikeTime = CallFunc_RollNextEventTime_NextStrikeTime;
	Parms.CallFunc_MakeBiomesEnum_ReturnValue = CallFunc_MakeBiomesEnum_ReturnValue;
	Parms.K2Node_MakeStruct_FBiomeStormWindInfo = K2Node_MakeStruct_FBiomeStormWindInfo;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DisasterController.BP_DisasterController_C.FindTreeToppleCandidatesInBiome
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBiomesEnum                 Biome                                                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FFBiomeStormWindInfo        WindInfo                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              TreeToppleTimerIndex                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFLODInstanceID>     DistantInstances                                                 (Edit, BlueprintVisible)
// TArray<struct FFLODInstanceID>     CloseInstances                                                   (Edit, BlueprintVisible)
// TArray<struct FFLODInstanceID>     RandomInstancePerPlayer                                          (Edit, BlueprintVisible)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AWorldSettings*              CallFunc_GetWorldSettings_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBiomesEnum                 CallFunc_MakeBiomesEnum_ReturnValue                              (HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBiomesEnum                 CallFunc_MakeBiomesEnum_ReturnValue_1                            (HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFLODInstanceID             CallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// struct FFLODInstanceID             CallFunc_Array_Get_Item_1                                        (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomInteger_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomInteger_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AWorldSettings*              CallFunc_GetWorldSettings_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_Array_Get_Item_2                                        (NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFLODInstanceID             CallFunc_Array_Get_Item_3                                        (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_5                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomInteger_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTagQuery           CallFunc_MakeGameplayTagQuery_ReturnValue                        (None)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AWorldSettings*              CallFunc_GetWorldSettings_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AIcarusPlayerCharacterSurvival*>CallFunc_GetActorsOfClassInWorld_OutActors                       (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue_6                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerCharacterSurvival*CallFunc_Array_Get_Item_4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFLODInstanceID>     CallFunc_GetFLODInstancesOverlappingSphere_ReturnValue           (ReferenceParm)
// struct FBiomesRowHandle            CallFunc_SampleBiomeAtLocation_ReturnValue                       (NoDestructor, HasGetValueTypeHash)
// struct FFLODInstanceID             CallFunc_Array_Get_Item_5                                        (NoDestructor, HasGetValueTypeHash)
// struct FBiomesEnum                 CallFunc_RowHandleToStruct_ReturnValue                           (HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_EnumEnum_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBiomesEnum                 K2Node_Select_Default                                            (ConstParm, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_EnumEnum_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFLODRecord*                 CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_7                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetInstanceTransform_OutInstanceTransform               (IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetInstanceTransform_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_8                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FBiomesRowHandle            CallFunc_SampleBiomeAtLocation_ReturnValue_1                     (NoDestructor, HasGetValueTypeHash)
// struct FBiomesEnum                 CallFunc_RowHandleToStruct_ReturnValue_1                         (HasGetValueTypeHash)
// float                              CallFunc_Vector_Distance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_EnumEnum_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FBiomesEnum                 K2Node_Select_Default_1                                          (ConstParm, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_EnumEnum_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_DisasterController_C::FindTreeToppleCandidatesInBiome(const struct FBiomesEnum& Biome, const struct FFBiomeStormWindInfo& WindInfo, int32 TreeToppleTimerIndex, const TArray<struct FFLODInstanceID>& DistantInstances, const TArray<struct FFLODInstanceID>& CloseInstances, const TArray<struct FFLODInstanceID>& RandomInstancePerPlayer, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, bool Temp_bool_Variable, class AWorldSettings* CallFunc_GetWorldSettings_ReturnValue, const struct FBiomesEnum& CallFunc_MakeBiomesEnum_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_IsServer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Variable_2, const struct FBiomesEnum& CallFunc_MakeBiomesEnum_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, int32 CallFunc_Array_Length_ReturnValue, const struct FFLODInstanceID& CallFunc_Array_Get_Item, const struct FFLODInstanceID& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_RandomInteger_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_3, class AWorldSettings* CallFunc_GetWorldSettings_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, const struct FTimerHandle& CallFunc_Array_Get_Item_2, float CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, const struct FFLODInstanceID& CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_4, int32 CallFunc_Array_Length_ReturnValue_5, int32 CallFunc_RandomInteger_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, const struct FGameplayTagQuery& CallFunc_MakeGameplayTagQuery_ReturnValue, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, bool Temp_bool_Variable_1, class AWorldSettings* CallFunc_GetWorldSettings_ReturnValue_2, TArray<class AIcarusPlayerCharacterSurvival*>& CallFunc_GetActorsOfClassInWorld_OutActors, int32 CallFunc_Array_Length_ReturnValue_6, class AIcarusPlayerCharacterSurvival* CallFunc_Array_Get_Item_4, bool CallFunc_Less_IntInt_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, TArray<struct FFLODInstanceID>& CallFunc_GetFLODInstancesOverlappingSphere_ReturnValue, const struct FBiomesRowHandle& CallFunc_SampleBiomeAtLocation_ReturnValue, const struct FFLODInstanceID& CallFunc_Array_Get_Item_5, const struct FBiomesEnum& CallFunc_RowHandleToStruct_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_2, bool CallFunc_EqualEqual_EnumEnum_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_3, const struct FBiomesEnum& K2Node_Select_Default, bool CallFunc_EqualEqual_EnumEnum_ReturnValue_1, class UFLODRecord* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_7, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_2, const struct FTransform& CallFunc_GetInstanceTransform_OutInstanceTransform, bool CallFunc_GetInstanceTransform_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_8, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, bool CallFunc_Greater_IntInt_ReturnValue_2, const struct FBiomesRowHandle& CallFunc_SampleBiomeAtLocation_ReturnValue_1, const struct FBiomesEnum& CallFunc_RowHandleToStruct_ReturnValue_1, float CallFunc_Vector_Distance_ReturnValue, bool CallFunc_EqualEqual_EnumEnum_ReturnValue_2, bool CallFunc_Less_FloatFloat_ReturnValue, const struct FBiomesEnum& K2Node_Select_Default_1, bool CallFunc_EqualEqual_EnumEnum_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DisasterController_C", "FindTreeToppleCandidatesInBiome");

	Params::ABP_DisasterController_C_FindTreeToppleCandidatesInBiome_Params Parms{};

	Parms.Biome = Biome;
	Parms.WindInfo = WindInfo;
	Parms.TreeToppleTimerIndex = TreeToppleTimerIndex;
	Parms.DistantInstances = DistantInstances;
	Parms.CloseInstances = CloseInstances;
	Parms.RandomInstancePerPlayer = RandomInstancePerPlayer;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetWorldSettings_ReturnValue = CallFunc_GetWorldSettings_ReturnValue;
	Parms.CallFunc_MakeBiomesEnum_ReturnValue = CallFunc_MakeBiomesEnum_ReturnValue;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.CallFunc_MakeBiomesEnum_ReturnValue_1 = CallFunc_MakeBiomesEnum_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue_1 = CallFunc_NotEqual_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_RandomInteger_ReturnValue = CallFunc_RandomInteger_ReturnValue;
	Parms.CallFunc_RandomInteger_ReturnValue_1 = CallFunc_RandomInteger_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_GetWorldSettings_ReturnValue_1 = CallFunc_GetWorldSettings_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue = CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_4 = CallFunc_Array_Length_ReturnValue_4;
	Parms.CallFunc_Array_Length_ReturnValue_5 = CallFunc_Array_Length_ReturnValue_5;
	Parms.CallFunc_RandomInteger_ReturnValue_2 = CallFunc_RandomInteger_ReturnValue_2;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_MakeGameplayTagQuery_ReturnValue = CallFunc_MakeGameplayTagQuery_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_GetWorldSettings_ReturnValue_2 = CallFunc_GetWorldSettings_ReturnValue_2;
	Parms.CallFunc_GetActorsOfClassInWorld_OutActors = CallFunc_GetActorsOfClassInWorld_OutActors;
	Parms.CallFunc_Array_Length_ReturnValue_6 = CallFunc_Array_Length_ReturnValue_6;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetFLODInstancesOverlappingSphere_ReturnValue = CallFunc_GetFLODInstancesOverlappingSphere_ReturnValue;
	Parms.CallFunc_SampleBiomeAtLocation_ReturnValue = CallFunc_SampleBiomeAtLocation_ReturnValue;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.CallFunc_RowHandleToStruct_ReturnValue = CallFunc_RowHandleToStruct_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_EqualEqual_EnumEnum_ReturnValue = CallFunc_EqualEqual_EnumEnum_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_3 = CallFunc_Array_Add_ReturnValue_3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_EqualEqual_EnumEnum_ReturnValue_1 = CallFunc_EqualEqual_EnumEnum_ReturnValue_1;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_7 = CallFunc_Array_Length_ReturnValue_7;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_GetInstanceTransform_OutInstanceTransform = CallFunc_GetInstanceTransform_OutInstanceTransform;
	Parms.CallFunc_GetInstanceTransform_ReturnValue = CallFunc_GetInstanceTransform_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_8 = CallFunc_Array_Length_ReturnValue_8;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_Greater_IntInt_ReturnValue_2 = CallFunc_Greater_IntInt_ReturnValue_2;
	Parms.CallFunc_SampleBiomeAtLocation_ReturnValue_1 = CallFunc_SampleBiomeAtLocation_ReturnValue_1;
	Parms.CallFunc_RowHandleToStruct_ReturnValue_1 = CallFunc_RowHandleToStruct_ReturnValue_1;
	Parms.CallFunc_Vector_Distance_ReturnValue = CallFunc_Vector_Distance_ReturnValue;
	Parms.CallFunc_EqualEqual_EnumEnum_ReturnValue_2 = CallFunc_EqualEqual_EnumEnum_ReturnValue_2;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_EqualEqual_EnumEnum_ReturnValue_3 = CallFunc_EqualEqual_EnumEnum_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DisasterController.BP_DisasterController_C.CheckForWindTreeTopples
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBiomesEnum                 CallFunc_IntToStruct_ReturnValue                                 (HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetLevelTimeElapsedSec_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWeatherManagerComponent*    CallFunc_GetWeatherManager_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWindStrength_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_NumRows_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFBiomeStormWindInfo        CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_RollNextEventTime_NextStrikeTime                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFBiomeStormWindInfo        K2Node_MakeStruct_FBiomeStormWindInfo                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DisasterController_C::CheckForWindTreeTopples(int32 Temp_int_Variable, int32 Temp_int_Variable_1, const struct FBiomesEnum& CallFunc_IntToStruct_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_GetLevelTimeElapsedSec_ReturnValue, class UWeatherManagerComponent* CallFunc_GetWeatherManager_ReturnValue, float CallFunc_GetWindStrength_ReturnValue, int32 CallFunc_NumRows_ReturnValue, const struct FFBiomeStormWindInfo& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, int32 CallFunc_RollNextEventTime_NextStrikeTime, bool CallFunc_BooleanAND_ReturnValue, const struct FFBiomeStormWindInfo& K2Node_MakeStruct_FBiomeStormWindInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DisasterController_C", "CheckForWindTreeTopples");

	Params::ABP_DisasterController_C_CheckForWindTreeTopples_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_IntToStruct_ReturnValue = CallFunc_IntToStruct_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetLevelTimeElapsedSec_ReturnValue = CallFunc_GetLevelTimeElapsedSec_ReturnValue;
	Parms.CallFunc_GetWeatherManager_ReturnValue = CallFunc_GetWeatherManager_ReturnValue;
	Parms.CallFunc_GetWindStrength_ReturnValue = CallFunc_GetWindStrength_ReturnValue;
	Parms.CallFunc_NumRows_ReturnValue = CallFunc_NumRows_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_RollNextEventTime_NextStrikeTime = CallFunc_RollNextEventTime_NextStrikeTime;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_MakeStruct_FBiomeStormWindInfo = K2Node_MakeStruct_FBiomeStormWindInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DisasterController.BP_DisasterController_C.MakeToppleTreeCandidate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFLODInstanceID             Instance                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// enum class ETreePrimitiveDetachContextContext                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     ToppleDirection                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTreeToppleInfo             K2Node_MakeStruct_TreeToppleInfo                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_DisasterController_C::MakeToppleTreeCandidate(const struct FFLODInstanceID& Instance, enum class ETreePrimitiveDetachContext Context, const struct FVector& ToppleDirection, int32 Temp_int_Variable, bool CallFunc_IsServer_ReturnValue, const struct FTreeToppleInfo& K2Node_MakeStruct_TreeToppleInfo, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_RandomFloat_ReturnValue, float CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DisasterController_C", "MakeToppleTreeCandidate");

	Params::ABP_DisasterController_C_MakeToppleTreeCandidate_Params Parms{};

	Parms.Instance = Instance;
	Parms.Context = Context;
	Parms.ToppleDirection = ToppleDirection;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.K2Node_MakeStruct_TreeToppleInfo = K2Node_MakeStruct_TreeToppleInfo;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_RandomFloat_ReturnValue = CallFunc_RandomFloat_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue = CallFunc_EqualEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DisasterController.BP_DisasterController_C.ToppleTree
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFLODInstanceID             Instance                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FTreeToppleInfo             ToppleInfo                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_FindActorFromInstanceID_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATreeBase*                   K2Node_DynamicCast_AsTree_Base                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_DisasterController_C::ToppleTree(const struct FFLODInstanceID& Instance, const struct FTreeToppleInfo& ToppleInfo, int32 CallFunc_MakeLiteralInt_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue, class AActor* CallFunc_FindActorFromInstanceID_ReturnValue, class ATreeBase* K2Node_DynamicCast_AsTree_Base, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DisasterController_C", "ToppleTree");

	Params::ABP_DisasterController_C_ToppleTree_Params Parms{};

	Parms.Instance = Instance;
	Parms.ToppleInfo = ToppleInfo;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.CallFunc_FindActorFromInstanceID_ReturnValue = CallFunc_FindActorFromInstanceID_ReturnValue;
	Parms.K2Node_DynamicCast_AsTree_Base = K2Node_DynamicCast_AsTree_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DisasterController.BP_DisasterController_C.CheckForNewLightningStrike
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBiomesEnum                 CallFunc_IntToStruct_ReturnValue                                 (HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetLevelTimeElapsedSec_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_NumRows_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFBiomeLightning            CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_RollNextEventTime_NextStrikeTime                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFBiomeLightning            K2Node_MakeStruct_FBiomeLightning                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DisasterController_C::CheckForNewLightningStrike(int32 Temp_int_Variable, int32 Temp_int_Variable_1, const struct FBiomesEnum& CallFunc_IntToStruct_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_GetLevelTimeElapsedSec_ReturnValue, int32 CallFunc_NumRows_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FFBiomeLightning& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_RollNextEventTime_NextStrikeTime, const struct FFBiomeLightning& K2Node_MakeStruct_FBiomeLightning)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DisasterController_C", "CheckForNewLightningStrike");

	Params::ABP_DisasterController_C_CheckForNewLightningStrike_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_IntToStruct_ReturnValue = CallFunc_IntToStruct_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetLevelTimeElapsedSec_ReturnValue = CallFunc_GetLevelTimeElapsedSec_ReturnValue;
	Parms.CallFunc_NumRows_ReturnValue = CallFunc_NumRows_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_RollNextEventTime_NextStrikeTime = CallFunc_RollNextEventTime_NextStrikeTime;
	Parms.K2Node_MakeStruct_FBiomeLightning = K2Node_MakeStruct_FBiomeLightning;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DisasterController.BP_DisasterController_C.RollNextEventTime
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              Min                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Max                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NextStrikeTime                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetLevelTimeElapsedSec_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetStat_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetStat_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DisasterController_C::RollNextEventTime(float Min, float Max, int32* NextStrikeTime, int32 CallFunc_GetLevelTimeElapsedSec_ReturnValue, int32 CallFunc_GetStat_ReturnValue, int32 CallFunc_GetStat_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DisasterController_C", "RollNextEventTime");

	Params::ABP_DisasterController_C_RollNextEventTime_Params Parms{};

	Parms.Min = Min;
	Parms.Max = Max;
	Parms.CallFunc_GetLevelTimeElapsedSec_ReturnValue = CallFunc_GetLevelTimeElapsedSec_ReturnValue;
	Parms.CallFunc_GetStat_ReturnValue = CallFunc_GetStat_ReturnValue;
	Parms.CallFunc_GetStat_ReturnValue_1 = CallFunc_GetStat_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_1 = CallFunc_Divide_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (NextStrikeTime != nullptr)
		*NextStrikeTime = Parms.NextStrikeTime;

}


// Function BP_DisasterController.BP_DisasterController_C.StartGeneratingLightning
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              MinInterval                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              MaxInterval                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBiomesEnum                 Biome                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FBiomesEnum                 CallFunc_MakeBiomesEnum_ReturnValue                              (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_EnumEnum_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_RollNextEventTime_NextStrikeTime                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFBiomeLightning            K2Node_MakeStruct_FBiomeLightning                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBiomesEnum                 K2Node_Select_Default                                            (ConstParm, HasGetValueTypeHash)

void ABP_DisasterController_C::StartGeneratingLightning(float MinInterval, float MaxInterval, const struct FBiomesEnum& Biome, const struct FBiomesEnum& CallFunc_MakeBiomesEnum_ReturnValue, bool CallFunc_EqualEqual_EnumEnum_ReturnValue, int32 CallFunc_RollNextEventTime_NextStrikeTime, bool Temp_bool_Variable, const struct FFBiomeLightning& K2Node_MakeStruct_FBiomeLightning, const struct FBiomesEnum& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DisasterController_C", "StartGeneratingLightning");

	Params::ABP_DisasterController_C_StartGeneratingLightning_Params Parms{};

	Parms.MinInterval = MinInterval;
	Parms.MaxInterval = MaxInterval;
	Parms.Biome = Biome;
	Parms.CallFunc_MakeBiomesEnum_ReturnValue = CallFunc_MakeBiomesEnum_ReturnValue;
	Parms.CallFunc_EqualEqual_EnumEnum_ReturnValue = CallFunc_EqualEqual_EnumEnum_ReturnValue;
	Parms.CallFunc_RollNextEventTime_NextStrikeTime = CallFunc_RollNextEventTime_NextStrikeTime;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_MakeStruct_FBiomeLightning = K2Node_MakeStruct_FBiomeLightning;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DisasterController.BP_DisasterController_C.Server_GenerateLightningStrike
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBiomesEnum                 LightningBiome                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FFLODInstanceID             TargetFLODID                                                     (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// struct FVector                     TargetLocation                                                   (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      TargetActor                                                      (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGridPoint>          BuildingStructs                                                  (Edit, BlueprintVisible)
// class ABP_Building_Base_C*         TallestBuildingInGrid                                            (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_Building_Base_C*> PotentialBuildingTargets                                         (Edit, BlueprintVisible, DisableEditOnTemplate)
// enum class ELightningStrikeTarget  LightningStrikeTargetType                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LightningTargetRoll                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     AveragePlayerLocation                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               BiomeHasPlayers                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class ABP_IcarusPlayerCharacterSurvival_C*>CharactersInBiome                                                (Edit, BlueprintVisible, DisableEditOnTemplate)
// class AWorldSettings*              LocalWorldSettings                                               (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              Temp_object_Variable                                             (ConstParm, ReferenceParm)
// struct FBiomesEnum                 CallFunc_MakeBiomesEnum_ReturnValue                              (HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AWorldSettings*              CallFunc_GetWorldSettings_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBiomesEnum                 CallFunc_MakeBiomesEnum_ReturnValue_1                            (HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AWorldSettings*              CallFunc_GetWorldSettings_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBiomesEnum                 CallFunc_MakeBiomesEnum_ReturnValue_2                            (HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomInteger_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Divide_IntInt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Divide_IntInt_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FFloor_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FFloor_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Divide_IntInt_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FFloor_ReturnValue_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AWorldSettings*              CallFunc_GetWorldSettings_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_RandomUnitVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Normal_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_VectorVector_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBiomesRowHandle            CallFunc_SampleBiomeAtLocation_ReturnValue                       (NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBiomesEnum                 CallFunc_RowHandleToStruct_ReturnValue                           (HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_EnumEnum_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_LineTraceSingle_OutHit                                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_LineTraceSingle_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_ElementIndex                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_SelectVector_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBiomesEnum                 CallFunc_MakeBiomesEnum_ReturnValue_3                            (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_VectorVector_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_VectorToString_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// int32                              CallFunc_GetStat_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ModifyValueByPlusPercent_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetStat_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FFloor_ReturnValue_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ModifyValueByPlusPercent_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FFloor_ReturnValue_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetStat_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ModifyValueByPlusPercent_ReturnValue_2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FFloor_ReturnValue_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLightningRodCloser_LightningRod                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_IsLightningRodCloser_ChosenTarget                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_2                         (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// struct FGridPoint                  CallFunc_Array_Get_Item                                          (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class ABuildingBase*               CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Building_Base_C*         K2Node_DynamicCast_AsBP_Building_Base                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsBuildingOutside_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Divide_VectorInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class ABP_Grid_Base_C*>     CallFunc_GetActorsOfClassInWorld_OutActors                       (ReferenceParm)
// class ABP_Grid_Base_C*             CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FGridPoint>          CallFunc_Map_Values_Values                                       (ReferenceParm)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBiomesRowHandle            CallFunc_SampleBiomeAtLocation_ReturnValue_1                     (NoDestructor, HasGetValueTypeHash)
// struct FBiomesEnum                 CallFunc_RowHandleToStruct_ReturnValue_1                         (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_EnumEnum_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AWorldSettings*              CallFunc_GetWorldSettings_ReturnValue_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FBiomesEnum                 K2Node_Select_Default                                            (ConstParm, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_EnumEnum_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FBiomesEnum                 K2Node_Select_Default_1                                          (ConstParm, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_EnumEnum_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_MakeVector_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_IcarusPlayerCharacterSurvival_C*CallFunc_Array_Get_Item_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FBiomesEnum                 CallFunc_MakeBiomesEnum_ReturnValue_4                            (HasGetValueTypeHash)
// TArray<class AActor*>              Temp_object_Variable_1                                           (ConstParm, ReferenceParm)
// struct FFLODInstanceID             CallFunc_GetLightningStrikeTarget_FoundInstance                  (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetLightningStrikeTarget_Found                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_5                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_IcarusPlayerCharacterSurvival_C*CallFunc_GetUncoveredPlayer_TargetCharacter                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AWorldSettings*              CallFunc_GetWorldSettings_ReturnValue_4                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFLODRecord*                 CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class ABP_IcarusPlayerCharacterSurvival_C*>CallFunc_GetActorsOfClassInWorld_OutActors_1                     (ReferenceParm)
// class ABP_IcarusPlayerCharacterSurvival_C*CallFunc_Array_Get_Item_4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBiomesRowHandle            CallFunc_SampleBiomeAtLocation_ReturnValue_2                     (NoDestructor, HasGetValueTypeHash)
// struct FBiomesEnum                 CallFunc_RowHandleToStruct_ReturnValue_2                         (HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_EnumEnum_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetInstanceTransform_OutInstanceTransform               (IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetInstanceTransform_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBiomesEnum                 K2Node_Select_Default_2                                          (ConstParm, HasGetValueTypeHash)
// struct FBiomesRowHandle            CallFunc_SampleBiomeAtLocation_ReturnValue_3                     (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_EnumEnum_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FBiomesEnum                 CallFunc_RowHandleToStruct_ReturnValue_3                         (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_EnumEnum_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_6                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBiomesEnum                 K2Node_Select_Default_3                                          (ConstParm, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_6                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_EnumEnum_ReturnValue_7                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_Building_Base_C*         CallFunc_Array_Get_Item_5                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_7                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_RandomInteger_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FBoxSphereBounds            CallFunc_GetBounds_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_8                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GreaterGreater_VectorRotator_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_7                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AWorldSettings*              CallFunc_GetWorldSettings_ReturnValue_5                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_RandomUnitVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_3                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_3                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_3                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Normal_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_4                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBiomesRowHandle            CallFunc_SampleBiomeAtLocation_ReturnValue_4                     (NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_5                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBiomesEnum                 CallFunc_RowHandleToStruct_ReturnValue_4                         (HasGetValueTypeHash)
// struct FHitResult                  CallFunc_LineTraceSingle_OutHit_1                                (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_LineTraceSingle_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_EnumEnum_ReturnValue_8                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bBlockingHit_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bInitialOverlap_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakHitResult_Time_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent_1                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_ElementIndex_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_SelectVector_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBiomesEnum                 K2Node_Select_Default_4                                          (ConstParm, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_EnumEnum_ReturnValue_9                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_DisasterController_C::Server_GenerateLightningStrike(const struct FBiomesEnum& LightningBiome, const struct FFLODInstanceID& TargetFLODID, const struct FVector& TargetLocation, class AActor* TargetActor, const TArray<struct FGridPoint>& BuildingStructs, class ABP_Building_Base_C* TallestBuildingInGrid, const TArray<class ABP_Building_Base_C*>& PotentialBuildingTargets, enum class ELightningStrikeTarget LightningStrikeTargetType, int32 LightningTargetRoll, const struct FVector& AveragePlayerLocation, bool BiomeHasPlayers, const TArray<class ABP_IcarusPlayerCharacterSurvival_C*>& CharactersInBiome, class AWorldSettings* LocalWorldSettings, int32 Temp_int_Variable, bool Temp_bool_Variable, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AActor*>& Temp_object_Variable, const struct FBiomesEnum& CallFunc_MakeBiomesEnum_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_1, class AWorldSettings* CallFunc_GetWorldSettings_ReturnValue, const struct FBiomesEnum& CallFunc_MakeBiomesEnum_ReturnValue_1, bool Temp_bool_Variable_1, class AWorldSettings* CallFunc_GetWorldSettings_ReturnValue_1, const struct FBiomesEnum& CallFunc_MakeBiomesEnum_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Array_Index_Variable_2, bool CallFunc_IsServer_ReturnValue, int32 Temp_int_Array_Index_Variable_3, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue_1, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue_1, int32 CallFunc_FFloor_ReturnValue, int32 CallFunc_FFloor_ReturnValue_1, int32 CallFunc_Divide_IntInt_ReturnValue_2, int32 CallFunc_RandomIntegerInRange_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue_2, int32 CallFunc_FFloor_ReturnValue_2, class AWorldSettings* CallFunc_GetWorldSettings_ReturnValue_2, float CallFunc_RandomFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_RandomUnitVector_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, bool CallFunc_BooleanAND_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, bool CallFunc_EqualEqual_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FBiomesRowHandle& CallFunc_SampleBiomeAtLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FBiomesEnum& CallFunc_RowHandleToStruct_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, bool CallFunc_EqualEqual_EnumEnum_ReturnValue, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, bool Temp_bool_Variable_2, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FVector& CallFunc_SelectVector_ReturnValue, const struct FBiomesEnum& CallFunc_MakeBiomesEnum_ReturnValue_3, bool CallFunc_EqualEqual_VectorVector_ReturnValue_1, const class FString& CallFunc_Conv_VectorToString_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, int32 CallFunc_GetStat_ReturnValue, float CallFunc_ModifyValueByPlusPercent_ReturnValue, int32 CallFunc_GetStat_ReturnValue_1, int32 CallFunc_FFloor_ReturnValue_3, float CallFunc_ModifyValueByPlusPercent_ReturnValue_1, int32 CallFunc_FFloor_ReturnValue_4, int32 CallFunc_GetStat_ReturnValue_2, float CallFunc_ModifyValueByPlusPercent_ReturnValue_2, int32 CallFunc_FFloor_ReturnValue_5, bool CallFunc_IsLightningRodCloser_LightningRod, class AActor* CallFunc_IsLightningRodCloser_ChosenTarget, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 CallFunc_Add_IntInt_ReturnValue_5, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const struct FGridPoint& CallFunc_Array_Get_Item, const class FString& CallFunc_Conv_TextToString_ReturnValue, class ABuildingBase* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, class ABP_Building_Base_C* K2Node_DynamicCast_AsBP_Building_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsBuildingOutside_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Greater_IntInt_ReturnValue, const struct FVector& CallFunc_Divide_VectorInt_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, bool Temp_bool_IsClosed_Variable, TArray<class ABP_Grid_Base_C*>& CallFunc_GetActorsOfClassInWorld_OutActors, class ABP_Grid_Base_C* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue_2, TArray<struct FGridPoint>& CallFunc_Map_Values_Values, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, const struct FBiomesRowHandle& CallFunc_SampleBiomeAtLocation_ReturnValue_1, const struct FBiomesEnum& CallFunc_RowHandleToStruct_ReturnValue_1, bool CallFunc_EqualEqual_EnumEnum_ReturnValue_1, class AWorldSettings* CallFunc_GetWorldSettings_ReturnValue_3, bool Temp_bool_Variable_3, const struct FBiomesEnum& K2Node_Select_Default, bool CallFunc_EqualEqual_EnumEnum_ReturnValue_2, const struct FBiomesEnum& K2Node_Select_Default_1, bool CallFunc_EqualEqual_EnumEnum_ReturnValue_3, bool Temp_bool_Variable_4, const struct FVector& CallFunc_MakeVector_ReturnValue_2, int32 Temp_int_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_3, class ABP_IcarusPlayerCharacterSurvival_C* CallFunc_Array_Get_Item_3, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue_5, const struct FBiomesEnum& CallFunc_MakeBiomesEnum_ReturnValue_4, TArray<class AActor*>& Temp_object_Variable_1, const struct FFLODInstanceID& CallFunc_GetLightningStrikeTarget_FoundInstance, bool CallFunc_GetLightningStrikeTarget_Found, int32 CallFunc_Array_Length_ReturnValue_5, class ABP_IcarusPlayerCharacterSurvival_C* CallFunc_GetUncoveredPlayer_TargetCharacter, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_4, class AWorldSettings* CallFunc_GetWorldSettings_ReturnValue_4, class UFLODRecord* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, TArray<class ABP_IcarusPlayerCharacterSurvival_C*>& CallFunc_GetActorsOfClassInWorld_OutActors_1, class ABP_IcarusPlayerCharacterSurvival_C* CallFunc_Array_Get_Item_4, bool CallFunc_IsValid_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_5, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_2, const struct FBiomesRowHandle& CallFunc_SampleBiomeAtLocation_ReturnValue_2, const struct FBiomesEnum& CallFunc_RowHandleToStruct_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_EqualEqual_EnumEnum_ReturnValue_4, const struct FTransform& CallFunc_GetInstanceTransform_OutInstanceTransform, bool CallFunc_GetInstanceTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FBiomesEnum& K2Node_Select_Default_2, const struct FBiomesRowHandle& CallFunc_SampleBiomeAtLocation_ReturnValue_3, bool CallFunc_EqualEqual_EnumEnum_ReturnValue_5, const struct FBiomesEnum& CallFunc_RowHandleToStruct_ReturnValue_3, bool CallFunc_EqualEqual_EnumEnum_ReturnValue_6, int32 CallFunc_Array_Length_ReturnValue_6, const struct FBiomesEnum& K2Node_Select_Default_3, bool CallFunc_Less_IntInt_ReturnValue_6, bool CallFunc_EqualEqual_EnumEnum_ReturnValue_7, class ABP_Building_Base_C* CallFunc_Array_Get_Item_5, int32 CallFunc_Array_Length_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_3, int32 CallFunc_RandomInteger_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_6, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FBoxSphereBounds& CallFunc_GetBounds_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_8, bool CallFunc_Greater_IntInt_ReturnValue_2, const struct FVector& CallFunc_GreaterGreater_VectorRotator_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, bool CallFunc_EqualEqual_ByteByte_ReturnValue_5, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_7, float CallFunc_BreakVector_X_2, float CallFunc_BreakVector_Y_2, float CallFunc_BreakVector_Z_2, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_Greater_FloatFloat_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, class AWorldSettings* CallFunc_GetWorldSettings_ReturnValue_5, const struct FVector& CallFunc_RandomUnitVector_ReturnValue_1, float CallFunc_BreakVector_X_3, float CallFunc_BreakVector_Y_3, float CallFunc_BreakVector_Z_3, const struct FVector& CallFunc_MakeVector_ReturnValue_3, const struct FVector& CallFunc_Normal_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_4, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_1, const struct FBiomesRowHandle& CallFunc_SampleBiomeAtLocation_ReturnValue_4, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_5, const struct FBiomesEnum& CallFunc_RowHandleToStruct_ReturnValue_4, const struct FHitResult& CallFunc_LineTraceSingle_OutHit_1, bool CallFunc_LineTraceSingle_ReturnValue_1, bool CallFunc_EqualEqual_EnumEnum_ReturnValue_8, bool CallFunc_BreakHitResult_bBlockingHit_1, bool CallFunc_BreakHitResult_bInitialOverlap_1, float CallFunc_BreakHitResult_Time_1, float CallFunc_BreakHitResult_Distance_1, const struct FVector& CallFunc_BreakHitResult_Location_1, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_1, const struct FVector& CallFunc_BreakHitResult_Normal_1, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_1, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_1, class AActor* CallFunc_BreakHitResult_HitActor_1, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_1, class FName CallFunc_BreakHitResult_HitBoneName_1, int32 CallFunc_BreakHitResult_HitItem_1, int32 CallFunc_BreakHitResult_ElementIndex_1, int32 CallFunc_BreakHitResult_FaceIndex_1, const struct FVector& CallFunc_BreakHitResult_TraceStart_1, const struct FVector& CallFunc_BreakHitResult_TraceEnd_1, const struct FVector& CallFunc_SelectVector_ReturnValue_1, const struct FBiomesEnum& K2Node_Select_Default_4, bool CallFunc_EqualEqual_EnumEnum_ReturnValue_9)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DisasterController_C", "Server_GenerateLightningStrike");

	Params::ABP_DisasterController_C_Server_GenerateLightningStrike_Params Parms{};

	Parms.LightningBiome = LightningBiome;
	Parms.TargetFLODID = TargetFLODID;
	Parms.TargetLocation = TargetLocation;
	Parms.TargetActor = TargetActor;
	Parms.BuildingStructs = BuildingStructs;
	Parms.TallestBuildingInGrid = TallestBuildingInGrid;
	Parms.PotentialBuildingTargets = PotentialBuildingTargets;
	Parms.LightningStrikeTargetType = LightningStrikeTargetType;
	Parms.LightningTargetRoll = LightningTargetRoll;
	Parms.AveragePlayerLocation = AveragePlayerLocation;
	Parms.BiomeHasPlayers = BiomeHasPlayers;
	Parms.CharactersInBiome = CharactersInBiome;
	Parms.LocalWorldSettings = LocalWorldSettings;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_MakeBiomesEnum_ReturnValue = CallFunc_MakeBiomesEnum_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_GetWorldSettings_ReturnValue = CallFunc_GetWorldSettings_ReturnValue;
	Parms.CallFunc_MakeBiomesEnum_ReturnValue_1 = CallFunc_MakeBiomesEnum_ReturnValue_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_GetWorldSettings_ReturnValue_1 = CallFunc_GetWorldSettings_ReturnValue_1;
	Parms.CallFunc_MakeBiomesEnum_ReturnValue_2 = CallFunc_MakeBiomesEnum_ReturnValue_2;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_RandomInteger_ReturnValue = CallFunc_RandomInteger_ReturnValue;
	Parms.CallFunc_Divide_IntInt_ReturnValue = CallFunc_Divide_IntInt_ReturnValue;
	Parms.CallFunc_Divide_IntInt_ReturnValue_1 = CallFunc_Divide_IntInt_ReturnValue_1;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue_1 = CallFunc_Multiply_IntFloat_ReturnValue_1;
	Parms.CallFunc_FFloor_ReturnValue = CallFunc_FFloor_ReturnValue;
	Parms.CallFunc_FFloor_ReturnValue_1 = CallFunc_FFloor_ReturnValue_1;
	Parms.CallFunc_Divide_IntInt_ReturnValue_2 = CallFunc_Divide_IntInt_ReturnValue_2;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue_2 = CallFunc_Multiply_IntFloat_ReturnValue_2;
	Parms.CallFunc_FFloor_ReturnValue_2 = CallFunc_FFloor_ReturnValue_2;
	Parms.CallFunc_GetWorldSettings_ReturnValue_2 = CallFunc_GetWorldSettings_ReturnValue_2;
	Parms.CallFunc_RandomFloat_ReturnValue = CallFunc_RandomFloat_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_RandomUnitVector_ReturnValue = CallFunc_RandomUnitVector_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue_1 = CallFunc_MakeVector_ReturnValue_1;
	Parms.CallFunc_Normal_ReturnValue = CallFunc_Normal_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_EqualEqual_VectorVector_ReturnValue = CallFunc_EqualEqual_VectorVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_SampleBiomeAtLocation_ReturnValue = CallFunc_SampleBiomeAtLocation_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = CallFunc_Add_VectorVector_ReturnValue_1;
	Parms.CallFunc_RowHandleToStruct_ReturnValue = CallFunc_RowHandleToStruct_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_EqualEqual_EnumEnum_ReturnValue = CallFunc_EqualEqual_EnumEnum_ReturnValue;
	Parms.CallFunc_LineTraceSingle_OutHit = CallFunc_LineTraceSingle_OutHit;
	Parms.CallFunc_LineTraceSingle_ReturnValue = CallFunc_LineTraceSingle_ReturnValue;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.CallFunc_BreakHitResult_bBlockingHit = CallFunc_BreakHitResult_bBlockingHit;
	Parms.CallFunc_BreakHitResult_bInitialOverlap = CallFunc_BreakHitResult_bInitialOverlap;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Distance = CallFunc_BreakHitResult_Distance;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_HitActor = CallFunc_BreakHitResult_HitActor;
	Parms.CallFunc_BreakHitResult_HitComponent = CallFunc_BreakHitResult_HitComponent;
	Parms.CallFunc_BreakHitResult_HitBoneName = CallFunc_BreakHitResult_HitBoneName;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_ElementIndex = CallFunc_BreakHitResult_ElementIndex;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.CallFunc_SelectVector_ReturnValue = CallFunc_SelectVector_ReturnValue;
	Parms.CallFunc_MakeBiomesEnum_ReturnValue_3 = CallFunc_MakeBiomesEnum_ReturnValue_3;
	Parms.CallFunc_EqualEqual_VectorVector_ReturnValue_1 = CallFunc_EqualEqual_VectorVector_ReturnValue_1;
	Parms.CallFunc_Conv_VectorToString_ReturnValue = CallFunc_Conv_VectorToString_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_GetStat_ReturnValue = CallFunc_GetStat_ReturnValue;
	Parms.CallFunc_ModifyValueByPlusPercent_ReturnValue = CallFunc_ModifyValueByPlusPercent_ReturnValue;
	Parms.CallFunc_GetStat_ReturnValue_1 = CallFunc_GetStat_ReturnValue_1;
	Parms.CallFunc_FFloor_ReturnValue_3 = CallFunc_FFloor_ReturnValue_3;
	Parms.CallFunc_ModifyValueByPlusPercent_ReturnValue_1 = CallFunc_ModifyValueByPlusPercent_ReturnValue_1;
	Parms.CallFunc_FFloor_ReturnValue_4 = CallFunc_FFloor_ReturnValue_4;
	Parms.CallFunc_GetStat_ReturnValue_2 = CallFunc_GetStat_ReturnValue_2;
	Parms.CallFunc_ModifyValueByPlusPercent_ReturnValue_2 = CallFunc_ModifyValueByPlusPercent_ReturnValue_2;
	Parms.CallFunc_FFloor_ReturnValue_5 = CallFunc_FFloor_ReturnValue_5;
	Parms.CallFunc_IsLightningRodCloser_LightningRod = CallFunc_IsLightningRodCloser_LightningRod;
	Parms.CallFunc_IsLightningRodCloser_ChosenTarget = CallFunc_IsLightningRodCloser_ChosenTarget;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.CallFunc_Add_IntInt_ReturnValue_5 = CallFunc_Add_IntInt_ReturnValue_5;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue_2 = CallFunc_Conv_StringToText_ReturnValue_2;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_Building_Base = K2Node_DynamicCast_AsBP_Building_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsBuildingOutside_ReturnValue = CallFunc_IsBuildingOutside_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_BreakVector_X_1 = CallFunc_BreakVector_X_1;
	Parms.CallFunc_BreakVector_Y_1 = CallFunc_BreakVector_Y_1;
	Parms.CallFunc_BreakVector_Z_1 = CallFunc_BreakVector_Z_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Divide_VectorInt_ReturnValue = CallFunc_Divide_VectorInt_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_1 = CallFunc_RandomFloatInRange_ReturnValue_1;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_GetActorsOfClassInWorld_OutActors = CallFunc_GetActorsOfClassInWorld_OutActors;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_4 = CallFunc_Array_Length_ReturnValue_4;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_2 = CallFunc_K2_GetActorLocation_ReturnValue_2;
	Parms.CallFunc_SampleBiomeAtLocation_ReturnValue_1 = CallFunc_SampleBiomeAtLocation_ReturnValue_1;
	Parms.CallFunc_RowHandleToStruct_ReturnValue_1 = CallFunc_RowHandleToStruct_ReturnValue_1;
	Parms.CallFunc_EqualEqual_EnumEnum_ReturnValue_1 = CallFunc_EqualEqual_EnumEnum_ReturnValue_1;
	Parms.CallFunc_GetWorldSettings_ReturnValue_3 = CallFunc_GetWorldSettings_ReturnValue_3;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_EqualEqual_EnumEnum_ReturnValue_2 = CallFunc_EqualEqual_EnumEnum_ReturnValue_2;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_EqualEqual_EnumEnum_ReturnValue_3 = CallFunc_EqualEqual_EnumEnum_ReturnValue_3;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.CallFunc_MakeVector_ReturnValue_2 = CallFunc_MakeVector_ReturnValue_2;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_3 = CallFunc_K2_GetActorLocation_ReturnValue_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_4 = CallFunc_Less_IntInt_ReturnValue_4;
	Parms.CallFunc_Less_IntInt_ReturnValue_5 = CallFunc_Less_IntInt_ReturnValue_5;
	Parms.CallFunc_MakeBiomesEnum_ReturnValue_4 = CallFunc_MakeBiomesEnum_ReturnValue_4;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.CallFunc_GetLightningStrikeTarget_FoundInstance = CallFunc_GetLightningStrikeTarget_FoundInstance;
	Parms.CallFunc_GetLightningStrikeTarget_Found = CallFunc_GetLightningStrikeTarget_Found;
	Parms.CallFunc_Array_Length_ReturnValue_5 = CallFunc_Array_Length_ReturnValue_5;
	Parms.CallFunc_GetUncoveredPlayer_TargetCharacter = CallFunc_GetUncoveredPlayer_TargetCharacter;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_4 = CallFunc_K2_GetActorLocation_ReturnValue_4;
	Parms.CallFunc_GetWorldSettings_ReturnValue_4 = CallFunc_GetWorldSettings_ReturnValue_4;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_GetActorsOfClassInWorld_OutActors_1 = CallFunc_GetActorsOfClassInWorld_OutActors_1;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_5 = CallFunc_K2_GetActorLocation_ReturnValue_5;
	Parms.CallFunc_Add_VectorVector_ReturnValue_2 = CallFunc_Add_VectorVector_ReturnValue_2;
	Parms.CallFunc_SampleBiomeAtLocation_ReturnValue_2 = CallFunc_SampleBiomeAtLocation_ReturnValue_2;
	Parms.CallFunc_RowHandleToStruct_ReturnValue_2 = CallFunc_RowHandleToStruct_ReturnValue_2;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_EqualEqual_EnumEnum_ReturnValue_4 = CallFunc_EqualEqual_EnumEnum_ReturnValue_4;
	Parms.CallFunc_GetInstanceTransform_OutInstanceTransform = CallFunc_GetInstanceTransform_OutInstanceTransform;
	Parms.CallFunc_GetInstanceTransform_ReturnValue = CallFunc_GetInstanceTransform_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_SampleBiomeAtLocation_ReturnValue_3 = CallFunc_SampleBiomeAtLocation_ReturnValue_3;
	Parms.CallFunc_EqualEqual_EnumEnum_ReturnValue_5 = CallFunc_EqualEqual_EnumEnum_ReturnValue_5;
	Parms.CallFunc_RowHandleToStruct_ReturnValue_3 = CallFunc_RowHandleToStruct_ReturnValue_3;
	Parms.CallFunc_EqualEqual_EnumEnum_ReturnValue_6 = CallFunc_EqualEqual_EnumEnum_ReturnValue_6;
	Parms.CallFunc_Array_Length_ReturnValue_6 = CallFunc_Array_Length_ReturnValue_6;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_6 = CallFunc_Less_IntInt_ReturnValue_6;
	Parms.CallFunc_EqualEqual_EnumEnum_ReturnValue_7 = CallFunc_EqualEqual_EnumEnum_ReturnValue_7;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.CallFunc_Array_Length_ReturnValue_7 = CallFunc_Array_Length_ReturnValue_7;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_RandomInteger_ReturnValue_1 = CallFunc_RandomInteger_ReturnValue_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_6 = CallFunc_K2_GetActorLocation_ReturnValue_6;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_GetBounds_ReturnValue = CallFunc_GetBounds_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_8 = CallFunc_Array_Length_ReturnValue_8;
	Parms.CallFunc_Greater_IntInt_ReturnValue_2 = CallFunc_Greater_IntInt_ReturnValue_2;
	Parms.CallFunc_GreaterGreater_VectorRotator_ReturnValue = CallFunc_GreaterGreater_VectorRotator_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_Add_VectorVector_ReturnValue_3 = CallFunc_Add_VectorVector_ReturnValue_3;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = CallFunc_EqualEqual_ByteByte_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_4 = CallFunc_EqualEqual_ByteByte_ReturnValue_4;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_5 = CallFunc_EqualEqual_ByteByte_ReturnValue_5;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_7 = CallFunc_K2_GetActorLocation_ReturnValue_7;
	Parms.CallFunc_BreakVector_X_2 = CallFunc_BreakVector_X_2;
	Parms.CallFunc_BreakVector_Y_2 = CallFunc_BreakVector_Y_2;
	Parms.CallFunc_BreakVector_Z_2 = CallFunc_BreakVector_Z_2;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_GetWorldSettings_ReturnValue_5 = CallFunc_GetWorldSettings_ReturnValue_5;
	Parms.CallFunc_RandomUnitVector_ReturnValue_1 = CallFunc_RandomUnitVector_ReturnValue_1;
	Parms.CallFunc_BreakVector_X_3 = CallFunc_BreakVector_X_3;
	Parms.CallFunc_BreakVector_Y_3 = CallFunc_BreakVector_Y_3;
	Parms.CallFunc_BreakVector_Z_3 = CallFunc_BreakVector_Z_3;
	Parms.CallFunc_MakeVector_ReturnValue_3 = CallFunc_MakeVector_ReturnValue_3;
	Parms.CallFunc_Normal_ReturnValue_1 = CallFunc_Normal_ReturnValue_1;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_1 = CallFunc_Multiply_VectorFloat_ReturnValue_1;
	Parms.CallFunc_Add_VectorVector_ReturnValue_4 = CallFunc_Add_VectorVector_ReturnValue_4;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue_1 = CallFunc_Subtract_VectorVector_ReturnValue_1;
	Parms.CallFunc_SampleBiomeAtLocation_ReturnValue_4 = CallFunc_SampleBiomeAtLocation_ReturnValue_4;
	Parms.CallFunc_Add_VectorVector_ReturnValue_5 = CallFunc_Add_VectorVector_ReturnValue_5;
	Parms.CallFunc_RowHandleToStruct_ReturnValue_4 = CallFunc_RowHandleToStruct_ReturnValue_4;
	Parms.CallFunc_LineTraceSingle_OutHit_1 = CallFunc_LineTraceSingle_OutHit_1;
	Parms.CallFunc_LineTraceSingle_ReturnValue_1 = CallFunc_LineTraceSingle_ReturnValue_1;
	Parms.CallFunc_EqualEqual_EnumEnum_ReturnValue_8 = CallFunc_EqualEqual_EnumEnum_ReturnValue_8;
	Parms.CallFunc_BreakHitResult_bBlockingHit_1 = CallFunc_BreakHitResult_bBlockingHit_1;
	Parms.CallFunc_BreakHitResult_bInitialOverlap_1 = CallFunc_BreakHitResult_bInitialOverlap_1;
	Parms.CallFunc_BreakHitResult_Time_1 = CallFunc_BreakHitResult_Time_1;
	Parms.CallFunc_BreakHitResult_Distance_1 = CallFunc_BreakHitResult_Distance_1;
	Parms.CallFunc_BreakHitResult_Location_1 = CallFunc_BreakHitResult_Location_1;
	Parms.CallFunc_BreakHitResult_ImpactPoint_1 = CallFunc_BreakHitResult_ImpactPoint_1;
	Parms.CallFunc_BreakHitResult_Normal_1 = CallFunc_BreakHitResult_Normal_1;
	Parms.CallFunc_BreakHitResult_ImpactNormal_1 = CallFunc_BreakHitResult_ImpactNormal_1;
	Parms.CallFunc_BreakHitResult_PhysMat_1 = CallFunc_BreakHitResult_PhysMat_1;
	Parms.CallFunc_BreakHitResult_HitActor_1 = CallFunc_BreakHitResult_HitActor_1;
	Parms.CallFunc_BreakHitResult_HitComponent_1 = CallFunc_BreakHitResult_HitComponent_1;
	Parms.CallFunc_BreakHitResult_HitBoneName_1 = CallFunc_BreakHitResult_HitBoneName_1;
	Parms.CallFunc_BreakHitResult_HitItem_1 = CallFunc_BreakHitResult_HitItem_1;
	Parms.CallFunc_BreakHitResult_ElementIndex_1 = CallFunc_BreakHitResult_ElementIndex_1;
	Parms.CallFunc_BreakHitResult_FaceIndex_1 = CallFunc_BreakHitResult_FaceIndex_1;
	Parms.CallFunc_BreakHitResult_TraceStart_1 = CallFunc_BreakHitResult_TraceStart_1;
	Parms.CallFunc_BreakHitResult_TraceEnd_1 = CallFunc_BreakHitResult_TraceEnd_1;
	Parms.CallFunc_SelectVector_ReturnValue_1 = CallFunc_SelectVector_ReturnValue_1;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.CallFunc_EqualEqual_EnumEnum_ReturnValue_9 = CallFunc_EqualEqual_EnumEnum_ReturnValue_9;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DisasterController.BP_DisasterController_C.Multicast_LightningStrike
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ELightningStrikeTarget  TargetType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     TargetLocation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      TargetActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFLODInstanceID             TargetFLODInstance                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ABP_DisasterController_C::Multicast_LightningStrike(enum class ELightningStrikeTarget TargetType, const struct FVector& TargetLocation, class AActor* TargetActor, const struct FFLODInstanceID& TargetFLODInstance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DisasterController_C", "Multicast_LightningStrike");

	Params::ABP_DisasterController_C_Multicast_LightningStrike_Params Parms{};

	Parms.TargetType = TargetType;
	Parms.TargetLocation = TargetLocation;
	Parms.TargetActor = TargetActor;
	Parms.TargetFLODInstance = TargetFLODInstance;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DisasterController.BP_DisasterController_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DisasterController_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DisasterController_C", "ReceiveTick");

	Params::ABP_DisasterController_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DisasterController.BP_DisasterController_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_DisasterController_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DisasterController_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DisasterController.BP_DisasterController_C.OnSeedUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Seed                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DisasterController_C::OnSeedUpdated(int32 Seed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DisasterController_C", "OnSeedUpdated");

	Params::ABP_DisasterController_C_OnSeedUpdated_Params Parms{};

	Parms.Seed = Seed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DisasterController.BP_DisasterController_C.StopGeneratingLightning
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBiomesEnum                 Biome                                                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_DisasterController_C::StopGeneratingLightning(const struct FBiomesEnum& Biome)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DisasterController_C", "StopGeneratingLightning");

	Params::ABP_DisasterController_C_StopGeneratingLightning_Params Parms{};

	Parms.Biome = Biome;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DisasterController.BP_DisasterController_C.ExecuteUbergraph_BP_DisasterController
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetIcarusPlayerCharacter_IsValid                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerCharacter*      CallFunc_GetIcarusPlayerCharacter_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_PlayerEnvironmentalAudioComponent_C*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBP_PlayerEffectsComponent_C*CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ELightningStrikeTarget  K2Node_CustomEvent_TargetType                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_TargetLocation                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_TargetActor                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFLODInstanceID             K2Node_CustomEvent_TargetFLODInstance                            (NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_LightningStrike_C*       CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// int32                              CallFunc_Map_Length_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Map_Length_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AWeatherController*          CallFunc_GetWeatherController_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Seed                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusGameStateSurvival*    K2Node_DynamicCast_AsIcarus_Game_State_Survival                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// struct FBiomesEnum                 K2Node_Event_Biome                                               (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_EnumEnum_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FBiomesEnum                 CallFunc_MakeBiomesEnum_ReturnValue                              (HasGetValueTypeHash)
// struct FBiomesEnum                 K2Node_Select_Default                                            (ConstParm, HasGetValueTypeHash)
// bool                               CallFunc_Map_Remove_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_DisasterController_C::ExecuteUbergraph_BP_DisasterController(int32 EntryPoint, enum class EValid CallFunc_GetIcarusPlayerCharacter_IsValid, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, class UBP_PlayerEnvironmentalAudioComponent_C* CallFunc_GetComponentByClass_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UBP_PlayerEffectsComponent_C* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, enum class ELightningStrikeTarget K2Node_CustomEvent_TargetType, const struct FVector& K2Node_CustomEvent_TargetLocation, class AActor* K2Node_CustomEvent_TargetActor, const struct FFLODInstanceID& K2Node_CustomEvent_TargetFLODInstance, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class ABP_LightningStrike_C* CallFunc_FinishSpawningActor_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, bool Temp_bool_Variable, float K2Node_Event_DeltaSeconds, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Map_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Map_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1, class AWeatherController* CallFunc_GetWeatherController_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, int32 K2Node_CustomEvent_Seed, class AIcarusGameStateSurvival* K2Node_DynamicCast_AsIcarus_Game_State_Survival, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsServer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FBiomesEnum& K2Node_Event_Biome, bool CallFunc_EqualEqual_EnumEnum_ReturnValue, const struct FBiomesEnum& CallFunc_MakeBiomesEnum_ReturnValue, const struct FBiomesEnum& K2Node_Select_Default, bool CallFunc_Map_Remove_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DisasterController_C", "ExecuteUbergraph_BP_DisasterController");

	Params::ABP_DisasterController_C_ExecuteUbergraph_BP_DisasterController_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetIcarusPlayerCharacter_IsValid = CallFunc_GetIcarusPlayerCharacter_IsValid;
	Parms.CallFunc_GetIcarusPlayerCharacter_ReturnValue = CallFunc_GetIcarusPlayerCharacter_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_CustomEvent_TargetType = K2Node_CustomEvent_TargetType;
	Parms.K2Node_CustomEvent_TargetLocation = K2Node_CustomEvent_TargetLocation;
	Parms.K2Node_CustomEvent_TargetActor = K2Node_CustomEvent_TargetActor;
	Parms.K2Node_CustomEvent_TargetFLODInstance = K2Node_CustomEvent_TargetFLODInstance;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Map_Length_ReturnValue = CallFunc_Map_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Map_Length_ReturnValue_1 = CallFunc_Map_Length_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_GetWeatherController_ReturnValue = CallFunc_GetWeatherController_ReturnValue;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_CustomEvent_Seed = K2Node_CustomEvent_Seed;
	Parms.K2Node_DynamicCast_AsIcarus_Game_State_Survival = K2Node_DynamicCast_AsIcarus_Game_State_Survival;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_Event_Biome = K2Node_Event_Biome;
	Parms.CallFunc_EqualEqual_EnumEnum_ReturnValue = CallFunc_EqualEqual_EnumEnum_ReturnValue;
	Parms.CallFunc_MakeBiomesEnum_ReturnValue = CallFunc_MakeBiomesEnum_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Map_Remove_ReturnValue = CallFunc_Map_Remove_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}



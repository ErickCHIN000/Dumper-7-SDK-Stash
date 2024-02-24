#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseBuildSystemEntity_01.BaseBuildSystemEntity_01_C
// (Actor)

class UClass* ABaseBuildSystemEntity_01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseBuildSystemEntity_01_C");

	return Clss;
}


// BaseBuildSystemEntity_01_C BaseBuildSystemEntity_01.Default__BaseBuildSystemEntity_01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABaseBuildSystemEntity_01_C* ABaseBuildSystemEntity_01_C::GetDefaultObj()
{
	static class ABaseBuildSystemEntity_01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABaseBuildSystemEntity_01_C*>(ABaseBuildSystemEntity_01_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BaseBuildSystemEntity_01.BaseBuildSystemEntity_01_C.GetObjectsToSave
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UObject*>             ReturnValue                                                      (Parm, OutParm, ReturnParm)

TArray<class UObject*> ABaseBuildSystemEntity_01_C::GetObjectsToSave()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseBuildSystemEntity_01_C", "GetObjectsToSave");

	Params::ABaseBuildSystemEntity_01_C_GetObjectsToSave_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BaseBuildSystemEntity_01.BaseBuildSystemEntity_01_C.HasObjectsToSave
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABaseBuildSystemEntity_01_C::HasObjectsToSave()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseBuildSystemEntity_01_C", "HasObjectsToSave");

	Params::ABaseBuildSystemEntity_01_C_HasObjectsToSave_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BaseBuildSystemEntity_01.BaseBuildSystemEntity_01_C.ShouldUpdateOverlapsOnLoad
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABaseBuildSystemEntity_01_C::ShouldUpdateOverlapsOnLoad()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseBuildSystemEntity_01_C", "ShouldUpdateOverlapsOnLoad");

	Params::ABaseBuildSystemEntity_01_C_ShouldUpdateOverlapsOnLoad_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BaseBuildSystemEntity_01.BaseBuildSystemEntity_01_C.AdjustMPC
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enabled                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetScalarParameterValue_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABaseBuildSystemEntity_01_C::AdjustMPC(bool Enabled, float CallFunc_GetScalarParameterValue_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseBuildSystemEntity_01_C", "AdjustMPC");

	Params::ABaseBuildSystemEntity_01_C_AdjustMPC_Params Parms{};

	Parms.Enabled = Enabled;
	Parms.CallFunc_GetScalarParameterValue_ReturnValue = CallFunc_GetScalarParameterValue_ReturnValue;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue = CallFunc_EqualEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue_1 = CallFunc_EqualEqual_FloatFloat_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseBuildSystemEntity_01.BaseBuildSystemEntity_01_C.GetMinimapTag
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class Abp_MinimapTag_C*            Tag                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class Abp_MinimapTag_C*            K2Node_DynamicCast_AsBp_Minimap_Tag                              (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABaseBuildSystemEntity_01_C::GetMinimapTag(class Abp_MinimapTag_C** Tag, class Abp_MinimapTag_C* K2Node_DynamicCast_AsBp_Minimap_Tag, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseBuildSystemEntity_01_C", "GetMinimapTag");

	Params::ABaseBuildSystemEntity_01_C_GetMinimapTag_Params Parms{};

	Parms.K2Node_DynamicCast_AsBp_Minimap_Tag = K2Node_DynamicCast_AsBp_Minimap_Tag;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Tag != nullptr)
		*Tag = Parms.Tag;

}


// Function BaseBuildSystemEntity_01.BaseBuildSystemEntity_01_C.NewFunction_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseBuildSystemEntity_01_C::NewFunction_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseBuildSystemEntity_01_C", "NewFunction_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseBuildSystemEntity_01.BaseBuildSystemEntity_01_C.Restart after death
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseBuildSystemEntity_01_C::Restart_after_death()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseBuildSystemEntity_01_C", "Restart after death");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseBuildSystemEntity_01.BaseBuildSystemEntity_01_C.Power Off
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseBuildSystemEntity_01_C::Power_Off()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseBuildSystemEntity_01_C", "Power Off");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseBuildSystemEntity_01.BaseBuildSystemEntity_01_C.Power On
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseBuildSystemEntity_01_C::Power_On()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseBuildSystemEntity_01_C", "Power On");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseBuildSystemEntity_01.BaseBuildSystemEntity_01_C.ToggleInteraction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               InteractionEnabled                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              ListToToggle                                                     (Edit, BlueprintVisible, DisableEditOnTemplate)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Aba_InteractableCustom_01_NoSave_C*K2Node_DynamicCast_AsBa_Interactable_Custom_01_No_Save           (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class Aba_InteractableCustom_00_C* K2Node_DynamicCast_AsBa_Interactable_Custom_00                   (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IInteractable>K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              CallFunc_GetAllChildActors_ChildActors                           (ReferenceParm)
// class AActor*                      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_GetAllChildActors_ChildActors_1                         (ReferenceParm)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_GetAllChildActors_ChildActors_2                         (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABaseBuildSystemEntity_01_C::ToggleInteraction(bool InteractionEnabled, const TArray<class AActor*>& ListToToggle, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool Temp_bool_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_2, class AActor* CallFunc_Array_Get_Item, class Aba_InteractableCustom_01_NoSave_C* K2Node_DynamicCast_AsBa_Interactable_Custom_01_No_Save, bool K2Node_DynamicCast_bSuccess, class Aba_InteractableCustom_00_C* K2Node_DynamicCast_AsBa_Interactable_Custom_00, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Add_IntInt_ReturnValue_2, TScriptInterface<class IInteractable> K2Node_Select_Default, bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<class AActor*>& CallFunc_GetAllChildActors_ChildActors, class AActor* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, TArray<class AActor*>& CallFunc_GetAllChildActors_ChildActors_1, bool CallFunc_Less_IntInt_ReturnValue_1, class AActor* CallFunc_Array_Get_Item_2, TArray<class AActor*>& CallFunc_GetAllChildActors_ChildActors_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseBuildSystemEntity_01_C", "ToggleInteraction");

	Params::ABaseBuildSystemEntity_01_C_ToggleInteraction_Params Parms{};

	Parms.InteractionEnabled = InteractionEnabled;
	Parms.ListToToggle = ListToToggle;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsBa_Interactable_Custom_01_No_Save = K2Node_DynamicCast_AsBa_Interactable_Custom_01_No_Save;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBa_Interactable_Custom_00 = K2Node_DynamicCast_AsBa_Interactable_Custom_00;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetAllChildActors_ChildActors = CallFunc_GetAllChildActors_ChildActors;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_GetAllChildActors_ChildActors_1 = CallFunc_GetAllChildActors_ChildActors_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_GetAllChildActors_ChildActors_2 = CallFunc_GetAllChildActors_ChildActors_2;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseBuildSystemEntity_01.BaseBuildSystemEntity_01_C.LogScrap
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// struct FBuildEntryInternal         CallFunc_BuildSystemGetEntityInfo_ReturnValue                    (None)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// TArray<enum class EResourceType>   CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// int32                              CallFunc_Map_Length_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EResourceType           CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_CullSpacesFromA_String_ReturnValue                      (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemEntry                  CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<float>                      K2Node_MakeArray_Array                                           (ReferenceParm)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor, UObjectWrapper)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FDataTableRowHandle> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABaseBuildSystemEntity_01_C::LogScrap(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, const class FString& CallFunc_Concat_StrStr_ReturnValue, const struct FBuildEntryInternal& CallFunc_BuildSystemGetEntityInfo_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, TArray<enum class EResourceType>& CallFunc_Map_Keys_Keys, int32 CallFunc_Map_Length_ReturnValue, enum class EResourceType CallFunc_Array_Get_Item, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_CullSpacesFromA_String_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, float CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FItemEntry& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, TArray<float>& K2Node_MakeArray_Array, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, int32 CallFunc_Array_Length_ReturnValue, TArray<struct FDataTableRowHandle>& K2Node_MakeArray_Array_1, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseBuildSystemEntity_01_C", "LogScrap");

	Params::ABaseBuildSystemEntity_01_C_LogScrap_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_BuildSystemGetEntityInfo_ReturnValue = CallFunc_BuildSystemGetEntityInfo_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Map_Length_ReturnValue = CallFunc_Map_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_CullSpacesFromA_String_ReturnValue = CallFunc_CullSpacesFromA_String_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseBuildSystemEntity_01.BaseBuildSystemEntity_01_C.ToggleAdditionalAffinityEffects
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShouldEffectBeActive                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABaseBuildSystemEntity_01_C::ToggleAdditionalAffinityEffects(bool ShouldEffectBeActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseBuildSystemEntity_01_C", "ToggleAdditionalAffinityEffects");

	Params::ABaseBuildSystemEntity_01_C_ToggleAdditionalAffinityEffects_Params Parms{};

	Parms.ShouldEffectBeActive = ShouldEffectBeActive;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseBuildSystemEntity_01.BaseBuildSystemEntity_01_C.ToggleAdditionalBasicEffects
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShouldEffectBeActive                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABaseBuildSystemEntity_01_C::ToggleAdditionalBasicEffects(bool ShouldEffectBeActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseBuildSystemEntity_01_C", "ToggleAdditionalBasicEffects");

	Params::ABaseBuildSystemEntity_01_C_ToggleAdditionalBasicEffects_Params Parms{};

	Parms.ShouldEffectBeActive = ShouldEffectBeActive;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseBuildSystemEntity_01.BaseBuildSystemEntity_01_C.Bump__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABaseBuildSystemEntity_01_C::Bump__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseBuildSystemEntity_01_C", "Bump__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseBuildSystemEntity_01.BaseBuildSystemEntity_01_C.Bump__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABaseBuildSystemEntity_01_C::Bump__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseBuildSystemEntity_01_C", "Bump__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseBuildSystemEntity_01.BaseBuildSystemEntity_01_C.LoadingFinished
// (Event, Public, BlueprintEvent)
// Parameters:

void ABaseBuildSystemEntity_01_C::LoadingFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseBuildSystemEntity_01_C", "LoadingFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseBuildSystemEntity_01.BaseBuildSystemEntity_01_C.PrepareDataForSave
// (Event, Public, BlueprintEvent)
// Parameters:

void ABaseBuildSystemEntity_01_C::PrepareDataForSave()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseBuildSystemEntity_01_C", "PrepareDataForSave");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseBuildSystemEntity_01.BaseBuildSystemEntity_01_C.Placed
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseBuildSystemEntity_01_C::Placed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseBuildSystemEntity_01_C", "Placed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseBuildSystemEntity_01.BaseBuildSystemEntity_01_C.Replace
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseBuildSystemEntity_01_C::Replace()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseBuildSystemEntity_01_C", "Replace");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseBuildSystemEntity_01.BaseBuildSystemEntity_01_C.Deleted
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseBuildSystemEntity_01_C::Deleted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseBuildSystemEntity_01_C", "Deleted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseBuildSystemEntity_01.BaseBuildSystemEntity_01_C.StartFlourish
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseBuildSystemEntity_01_C::StartFlourish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseBuildSystemEntity_01_C", "StartFlourish");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseBuildSystemEntity_01.BaseBuildSystemEntity_01_C.Lifted
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseBuildSystemEntity_01_C::Lifted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseBuildSystemEntity_01_C", "Lifted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseBuildSystemEntity_01.BaseBuildSystemEntity_01_C.BumpMovement
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseBuildSystemEntity_01_C::BumpMovement()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseBuildSystemEntity_01_C", "BumpMovement");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseBuildSystemEntity_01.BaseBuildSystemEntity_01_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABaseBuildSystemEntity_01_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseBuildSystemEntity_01_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseBuildSystemEntity_01.BaseBuildSystemEntity_01_C.SpawnPickableScrappedResource
// (Event, Protected, BlueprintEvent)
// Parameters:
// class FName                        ResourceName                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseBuildSystemEntity_01_C::SpawnPickableScrappedResource(class FName ResourceName, float Amount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseBuildSystemEntity_01_C", "SpawnPickableScrappedResource");

	Params::ABaseBuildSystemEntity_01_C_SpawnPickableScrappedResource_Params Parms{};

	Parms.ResourceName = ResourceName;
	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseBuildSystemEntity_01.BaseBuildSystemEntity_01_C.UpdatePowerBasedOnLevel
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseBuildSystemEntity_01_C::UpdatePowerBasedOnLevel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseBuildSystemEntity_01_C", "UpdatePowerBasedOnLevel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseBuildSystemEntity_01.BaseBuildSystemEntity_01_C.LoadFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseBuildSystemEntity_01_C::LoadFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseBuildSystemEntity_01_C", "LoadFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseBuildSystemEntity_01.BaseBuildSystemEntity_01_C.DisableChildActorCollision
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseBuildSystemEntity_01_C::DisableChildActorCollision()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseBuildSystemEntity_01_C", "DisableChildActorCollision");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseBuildSystemEntity_01.BaseBuildSystemEntity_01_C.RevertCollisionDisable
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseBuildSystemEntity_01_C::RevertCollisionDisable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseBuildSystemEntity_01_C", "RevertCollisionDisable");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseBuildSystemEntity_01.BaseBuildSystemEntity_01_C.UpdateMinimapTag
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseBuildSystemEntity_01_C::UpdateMinimapTag()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseBuildSystemEntity_01_C", "UpdateMinimapTag");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseBuildSystemEntity_01.BaseBuildSystemEntity_01_C.ExecuteUbergraph_BaseBuildSystemEntity_01
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable                                             (ConstParm, ReferenceParm)
// class Aba_InfluencerComponent_C*   K2Node_DynamicCast_AsBa_Influencer_Component                     (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class Aba_InfluencerComponent_C*   K2Node_DynamicCast_AsBa_Influencer_Component_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class Aba_InfluencerComponent_C*   K2Node_DynamicCast_AsBa_Influencer_Component_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class Aba_InfluencerComponent_C*   K2Node_DynamicCast_AsBa_Influencer_Component_3                   (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class Aba_InfluencerComponent_C*   K2Node_DynamicCast_AsBa_Influencer_Component_4                   (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEventAtLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BuildSystemGetHasEnoughPower_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BuildSystemGetHasEnoughPower_ReturnValue_1              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_Event_ResourceName                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Amount                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemEntry                  CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMesh*                 K2Node_DynamicCast_AsStatic_Mesh                                 (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PickableItem_Spawnable_00_C*CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 Temp_delegate_Variable                                           (ConstParm, ZeroConstructor, NoDestructor)
// int32                              CallFunc_PostEvent_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UChildActorComponent*>CallFunc_K2_GetComponentsByClass_ReturnValue                     (ReferenceParm, ContainsInstancedReference)
// class UChildActorComponent*        CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Aba_Crafting_Base_Interactable_02_C*K2Node_DynamicCast_AsBa_Crafting_Base_Interactable_02            (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetCurrentPersistantLevel_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_VLerp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetActorLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetBuildID_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BuildSystemGetEntityCurrentCount_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Remove_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UChildActorComponent*>CallFunc_K2_GetComponentsByClass_ReturnValue_1                   (ReferenceParm, ContainsInstancedReference)
// class UChildActorComponent*        CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetActorEnableCollision_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// class AActor*                      CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetActorEnableCollision_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetCurrentPersistantLevel_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetBuildID_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FBuildEntry                 CallFunc_GetDataTableRowFromName_OutRow_1                        (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class Abp_MinimapTag_C*            CallFunc_GetMinimapTag_Tag                                       (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class Abp_MinimapTag_C*            CallFunc_GetMinimapTag_Tag_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class Abp_MinimapTag_C*            CallFunc_GetMinimapTag_Tag_2                                     (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class Abp_MinimapTag_C*            CallFunc_GetMinimapTag_Tag_3                                     (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class Abp_MinimapTag_C*            CallFunc_GetMinimapTag_Tag_4                                     (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class Abp_MinimapTag_C*            CallFunc_GetMinimapTag_Tag_5                                     (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void ABaseBuildSystemEntity_01_C::ExecuteUbergraph_BaseBuildSystemEntity_01(int32 EntryPoint, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, class Aba_InfluencerComponent_C* K2Node_DynamicCast_AsBa_Influencer_Component, bool K2Node_DynamicCast_bSuccess, class Aba_InfluencerComponent_C* K2Node_DynamicCast_AsBa_Influencer_Component_1, bool K2Node_DynamicCast_bSuccess_1, class Aba_InfluencerComponent_C* K2Node_DynamicCast_AsBa_Influencer_Component_2, bool K2Node_DynamicCast_bSuccess_2, class Aba_InfluencerComponent_C* K2Node_DynamicCast_AsBa_Influencer_Component_3, bool K2Node_DynamicCast_bSuccess_3, class Aba_InfluencerComponent_C* K2Node_DynamicCast_AsBa_Influencer_Component_4, bool K2Node_DynamicCast_bSuccess_4, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue, int32 Temp_int_Array_Index_Variable, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, bool CallFunc_BuildSystemGetHasEnoughPower_ReturnValue, bool CallFunc_BuildSystemGetHasEnoughPower_ReturnValue_1, bool Temp_bool_Variable, int32 Temp_int_Array_Index_Variable_1, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, class FName K2Node_Event_ResourceName, float K2Node_Event_Amount, const struct FItemEntry& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UStaticMesh* K2Node_DynamicCast_AsStatic_Mesh, bool K2Node_DynamicCast_bSuccess_5, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, int32 Temp_int_Loop_Counter_Variable_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_PickableItem_Spawnable_00_C* CallFunc_FinishSpawningActor_ReturnValue, int32 Temp_int_Array_Index_Variable_2, FDelegateProperty_ Temp_delegate_Variable, int32 CallFunc_PostEvent_ReturnValue, TArray<class UChildActorComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, class UChildActorComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable_2, class Aba_Crafting_Base_Interactable_02_C* K2Node_DynamicCast_AsBa_Crafting_Base_Interactable_02, bool K2Node_DynamicCast_bSuccess_6, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, class FName CallFunc_GetCurrentPersistantLevel_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, const struct FVector& K2Node_Select_Default, const struct FVector& CallFunc_VLerp_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_2, class FName CallFunc_GetBuildID_ReturnValue, int32 CallFunc_BuildSystemGetEntityCurrentCount_ReturnValue, bool CallFunc_Map_Remove_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, TArray<class UChildActorComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue_1, class UChildActorComponent* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_GetActorEnableCollision_ReturnValue, TArray<class AActor*>& CallFunc_Map_Keys_Keys, class AActor* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_GetActorEnableCollision_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class FName CallFunc_GetCurrentPersistantLevel_ReturnValue_1, class FName CallFunc_GetBuildID_ReturnValue_1, bool CallFunc_EqualEqual_NameName_ReturnValue, const struct FBuildEntry& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, class Abp_MinimapTag_C* CallFunc_GetMinimapTag_Tag, class Abp_MinimapTag_C* CallFunc_GetMinimapTag_Tag_1, class Abp_MinimapTag_C* CallFunc_GetMinimapTag_Tag_2, bool CallFunc_IsValid_ReturnValue, class Abp_MinimapTag_C* CallFunc_GetMinimapTag_Tag_3, class Abp_MinimapTag_C* CallFunc_GetMinimapTag_Tag_4, class Abp_MinimapTag_C* CallFunc_GetMinimapTag_Tag_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseBuildSystemEntity_01_C", "ExecuteUbergraph_BaseBuildSystemEntity_01");

	Params::ABaseBuildSystemEntity_01_C_ExecuteUbergraph_BaseBuildSystemEntity_01_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_DynamicCast_AsBa_Influencer_Component = K2Node_DynamicCast_AsBa_Influencer_Component;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBa_Influencer_Component_1 = K2Node_DynamicCast_AsBa_Influencer_Component_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsBa_Influencer_Component_2 = K2Node_DynamicCast_AsBa_Influencer_Component_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsBa_Influencer_Component_3 = K2Node_DynamicCast_AsBa_Influencer_Component_3;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_DynamicCast_AsBa_Influencer_Component_4 = K2Node_DynamicCast_AsBa_Influencer_Component_4;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = CallFunc_Add_VectorVector_ReturnValue_1;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_PostEventAtLocation_ReturnValue = CallFunc_PostEventAtLocation_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_BuildSystemGetHasEnoughPower_ReturnValue = CallFunc_BuildSystemGetHasEnoughPower_ReturnValue;
	Parms.CallFunc_BuildSystemGetHasEnoughPower_ReturnValue_1 = CallFunc_BuildSystemGetHasEnoughPower_ReturnValue_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_Event_ResourceName = K2Node_Event_ResourceName;
	Parms.K2Node_Event_Amount = K2Node_Event_Amount;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue = CallFunc_LoadAsset_Blocking_ReturnValue;
	Parms.K2Node_DynamicCast_AsStatic_Mesh = K2Node_DynamicCast_AsStatic_Mesh;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_2 = CallFunc_K2_GetActorLocation_ReturnValue_2;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.Temp_delegate_Variable = Temp_delegate_Variable;
	Parms.CallFunc_PostEvent_ReturnValue = CallFunc_PostEvent_ReturnValue;
	Parms.CallFunc_K2_GetComponentsByClass_ReturnValue = CallFunc_K2_GetComponentsByClass_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.K2Node_DynamicCast_AsBa_Crafting_Base_Interactable_02 = K2Node_DynamicCast_AsBa_Crafting_Base_Interactable_02;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_GetCurrentPersistantLevel_ReturnValue = CallFunc_GetCurrentPersistantLevel_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_VLerp_ReturnValue = CallFunc_VLerp_ReturnValue;
	Parms.CallFunc_K2_SetActorLocation_SweepHitResult = CallFunc_K2_SetActorLocation_SweepHitResult;
	Parms.CallFunc_K2_SetActorLocation_ReturnValue = CallFunc_K2_SetActorLocation_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_1 = CallFunc_GetCGGameInstance_AsCGGame_Instance_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_2 = CallFunc_GetCGGameInstance_AsCGGame_Instance_2;
	Parms.CallFunc_GetBuildID_ReturnValue = CallFunc_GetBuildID_ReturnValue;
	Parms.CallFunc_BuildSystemGetEntityCurrentCount_ReturnValue = CallFunc_BuildSystemGetEntityCurrentCount_ReturnValue;
	Parms.CallFunc_Map_Remove_ReturnValue = CallFunc_Map_Remove_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_K2_GetComponentsByClass_ReturnValue_1 = CallFunc_K2_GetComponentsByClass_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_GetActorEnableCollision_ReturnValue = CallFunc_GetActorEnableCollision_ReturnValue;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_GetActorEnableCollision_ReturnValue_1 = CallFunc_GetActorEnableCollision_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_GetCurrentPersistantLevel_ReturnValue_1 = CallFunc_GetCurrentPersistantLevel_ReturnValue_1;
	Parms.CallFunc_GetBuildID_ReturnValue_1 = CallFunc_GetBuildID_ReturnValue_1;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_1 = CallFunc_GetDataTableRowFromName_OutRow_1;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_1 = CallFunc_GetDataTableRowFromName_ReturnValue_1;
	Parms.CallFunc_GetMinimapTag_Tag = CallFunc_GetMinimapTag_Tag;
	Parms.CallFunc_GetMinimapTag_Tag_1 = CallFunc_GetMinimapTag_Tag_1;
	Parms.CallFunc_GetMinimapTag_Tag_2 = CallFunc_GetMinimapTag_Tag_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetMinimapTag_Tag_3 = CallFunc_GetMinimapTag_Tag_3;
	Parms.CallFunc_GetMinimapTag_Tag_4 = CallFunc_GetMinimapTag_Tag_4;
	Parms.CallFunc_GetMinimapTag_Tag_5 = CallFunc_GetMinimapTag_Tag_5;

	UObject::ProcessEvent(Func, &Parms);

}

}



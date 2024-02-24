#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_GGNPC_Humanoid_TrailerNPC.BP_GGNPC_Humanoid_TrailerNPC_C
// (Actor, Pawn)

class UClass* ABP_GGNPC_Humanoid_TrailerNPC_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_GGNPC_Humanoid_TrailerNPC_C");

	return Clss;
}


// BP_GGNPC_Humanoid_TrailerNPC_C BP_GGNPC_Humanoid_TrailerNPC.Default__BP_GGNPC_Humanoid_TrailerNPC_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_GGNPC_Humanoid_TrailerNPC_C* ABP_GGNPC_Humanoid_TrailerNPC_C::GetDefaultObj()
{
	static class ABP_GGNPC_Humanoid_TrailerNPC_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_GGNPC_Humanoid_TrailerNPC_C*>(ABP_GGNPC_Humanoid_TrailerNPC_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_GGNPC_Humanoid_TrailerNPC.BP_GGNPC_Humanoid_TrailerNPC_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_GGNPC_Humanoid_TrailerNPC_C::UserConstructionScript(bool CallFunc_IsValid_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GGNPC_Humanoid_TrailerNPC_C", "UserConstructionScript");

	Params::ABP_GGNPC_Humanoid_TrailerNPC_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_GGNPC_Humanoid_TrailerNPC.BP_GGNPC_Humanoid_TrailerNPC_C.Finished_B84EBAB549077A7EE6E420A318AB1451
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FLoadedAppearancePart>AppearanceParts                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UMaterialInterface*          SkinMaterial                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GGNPC_Humanoid_TrailerNPC_C::Finished_B84EBAB549077A7EE6E420A318AB1451(TArray<struct FLoadedAppearancePart>& AppearanceParts, class UMaterialInterface* SkinMaterial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GGNPC_Humanoid_TrailerNPC_C", "Finished_B84EBAB549077A7EE6E420A318AB1451");

	Params::ABP_GGNPC_Humanoid_TrailerNPC_C_Finished_B84EBAB549077A7EE6E420A318AB1451_Params Parms{};

	Parms.AppearanceParts = AppearanceParts;
	Parms.SkinMaterial = SkinMaterial;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_GGNPC_Humanoid_TrailerNPC.BP_GGNPC_Humanoid_TrailerNPC_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_GGNPC_Humanoid_TrailerNPC_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GGNPC_Humanoid_TrailerNPC_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_GGNPC_Humanoid_TrailerNPC.BP_GGNPC_Humanoid_TrailerNPC_C.LoadEditorAppearance
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_GGNPC_Humanoid_TrailerNPC_C::LoadEditorAppearance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GGNPC_Humanoid_TrailerNPC_C", "LoadEditorAppearance");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_GGNPC_Humanoid_TrailerNPC.BP_GGNPC_Humanoid_TrailerNPC_C.ExecuteUbergraph_BP_GGNPC_Humanoid_TrailerNPC
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FString>              CallFunc_GenerateAndSetNewAppearance_ReturnValue                 (ReferenceParm)
// bool                               CallFunc_IsGameplayTagValid_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsEmpty_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetGoatSimName_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FLoadedAppearancePart>Temp_struct_Variable                                             (ReferenceParm)
// class UMaterialInterface*          Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLoadedAppearancePart       CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAppearanceSetRow           CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetStaticMesh_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_1                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_2                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_3                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_7                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_8                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_9                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_10                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_11                            (ZeroConstructor, HasGetValueTypeHash)
// TArray<class FString>              K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// class UGGLoadNPCAppearance*        CallFunc_LoadNPCAppearance_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FLoadedAppearancePart>K2Node_CustomEvent_AppearanceParts                               (ConstParm, ReferenceParm)
// class UMaterialInterface*          K2Node_CustomEvent_SkinMaterial                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GGNPC_Humanoid_TrailerNPC_C::ExecuteUbergraph_BP_GGNPC_Humanoid_TrailerNPC(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, TArray<class FString>& CallFunc_GenerateAndSetNewAppearance_ReturnValue, bool CallFunc_IsGameplayTagValid_ReturnValue, bool CallFunc_IsEmpty_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_SetGoatSimName_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, TArray<struct FLoadedAppearancePart>& Temp_struct_Variable, class UMaterialInterface* Temp_object_Variable, const struct FLoadedAppearancePart& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FAppearanceSetRow& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Conv_IntToString_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Conv_IntToString_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, const class FString& CallFunc_Concat_StrStr_ReturnValue_8, const class FString& CallFunc_Concat_StrStr_ReturnValue_9, const class FString& CallFunc_Concat_StrStr_ReturnValue_10, const class FString& CallFunc_Concat_StrStr_ReturnValue_11, TArray<class FString>& K2Node_MakeArray_Array, class UGGLoadNPCAppearance* CallFunc_LoadNPCAppearance_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<struct FLoadedAppearancePart>& K2Node_CustomEvent_AppearanceParts, class UMaterialInterface* K2Node_CustomEvent_SkinMaterial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GGNPC_Humanoid_TrailerNPC_C", "ExecuteUbergraph_BP_GGNPC_Humanoid_TrailerNPC");

	Params::ABP_GGNPC_Humanoid_TrailerNPC_C_ExecuteUbergraph_BP_GGNPC_Humanoid_TrailerNPC_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_GenerateAndSetNewAppearance_ReturnValue = CallFunc_GenerateAndSetNewAppearance_ReturnValue;
	Parms.CallFunc_IsGameplayTagValid_ReturnValue = CallFunc_IsGameplayTagValid_ReturnValue;
	Parms.CallFunc_IsEmpty_ReturnValue_1 = CallFunc_IsEmpty_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_SetGoatSimName_ReturnValue = CallFunc_SetGoatSimName_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_SetStaticMesh_ReturnValue = CallFunc_SetStaticMesh_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue_1 = CallFunc_Conv_IntToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Conv_IntToString_ReturnValue_2 = CallFunc_Conv_IntToString_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = CallFunc_Concat_StrStr_ReturnValue_6;
	Parms.CallFunc_Conv_IntToString_ReturnValue_3 = CallFunc_Conv_IntToString_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_7 = CallFunc_Concat_StrStr_ReturnValue_7;
	Parms.CallFunc_Concat_StrStr_ReturnValue_8 = CallFunc_Concat_StrStr_ReturnValue_8;
	Parms.CallFunc_Concat_StrStr_ReturnValue_9 = CallFunc_Concat_StrStr_ReturnValue_9;
	Parms.CallFunc_Concat_StrStr_ReturnValue_10 = CallFunc_Concat_StrStr_ReturnValue_10;
	Parms.CallFunc_Concat_StrStr_ReturnValue_11 = CallFunc_Concat_StrStr_ReturnValue_11;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_LoadNPCAppearance_ReturnValue = CallFunc_LoadNPCAppearance_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CustomEvent_AppearanceParts = K2Node_CustomEvent_AppearanceParts;
	Parms.K2Node_CustomEvent_SkinMaterial = K2Node_CustomEvent_SkinMaterial;

	UObject::ProcessEvent(Func, &Parms);

}

}



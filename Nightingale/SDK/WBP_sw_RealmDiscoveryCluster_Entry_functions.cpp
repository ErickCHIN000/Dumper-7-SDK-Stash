#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_sw_RealmDiscoveryCluster_Entry.WBP_sw_RealmDiscoveryCluster_Entry_C
// (None)

class UClass* UWBP_sw_RealmDiscoveryCluster_Entry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_sw_RealmDiscoveryCluster_Entry_C");

	return Clss;
}


// WBP_sw_RealmDiscoveryCluster_Entry_C WBP_sw_RealmDiscoveryCluster_Entry.Default__WBP_sw_RealmDiscoveryCluster_Entry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_sw_RealmDiscoveryCluster_Entry_C* UWBP_sw_RealmDiscoveryCluster_Entry_C::GetDefaultObj()
{
	static class UWBP_sw_RealmDiscoveryCluster_Entry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_sw_RealmDiscoveryCluster_Entry_C*>(UWBP_sw_RealmDiscoveryCluster_Entry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_sw_RealmDiscoveryCluster_Entry.WBP_sw_RealmDiscoveryCluster_Entry_C.Get_MainOverlay_ToolTipWidget
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// enum class ENWXDiscoveryPresentationStateTemp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class UWBP_GenericTooltip_C*       CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// class FText                        K2Node_Select_Default                                            (None)

class UWidget* UWBP_sw_RealmDiscoveryCluster_Entry_C::Get_MainOverlay_ToolTipWidget(const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, enum class ENWXDiscoveryPresentationState Temp_byte_Variable, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText Temp_text_Variable, class FText CallFunc_Format_ReturnValue, class FText Temp_text_Variable_1, class UWBP_GenericTooltip_C* CallFunc_Create_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_RealmDiscoveryCluster_Entry_C", "Get_MainOverlay_ToolTipWidget");

	Params::UWBP_sw_RealmDiscoveryCluster_Entry_C_Get_MainOverlay_ToolTipWidget_Params Parms{};

	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_sw_RealmDiscoveryCluster_Entry.WBP_sw_RealmDiscoveryCluster_Entry_C.UpdateVisibility
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ENWXDiscoveryPresentationStateTemp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_sw_RealmDiscoveryCluster_Entry_C::UpdateVisibility(enum class ENWXDiscoveryPresentationState Temp_byte_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 K2Node_Select_Default, int32 CallFunc_Clamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_RealmDiscoveryCluster_Entry_C", "UpdateVisibility");

	Params::UWBP_sw_RealmDiscoveryCluster_Entry_C_UpdateVisibility_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.Temp_int_Variable_3 = Temp_int_Variable_3;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_sw_RealmDiscoveryCluster_Entry.WBP_sw_RealmDiscoveryCluster_Entry_C.UpdateIcon
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  L_TextureToApply                                                 (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_sw_RealmDiscoveryCluster_Entry_C::UpdateIcon(class UTexture2D* L_TextureToApply, bool CallFunc_IsValidSoftObjectReference_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_RealmDiscoveryCluster_Entry_C", "UpdateIcon");

	Params::UWBP_sw_RealmDiscoveryCluster_Entry_C_UpdateIcon_Params Parms{};

	Parms.L_TextureToApply = L_TextureToApply;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue = CallFunc_LoadAsset_Blocking_ReturnValue;
	Parms.K2Node_DynamicCast_AsTexture_2D = K2Node_DynamicCast_AsTexture_2D;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_sw_RealmDiscoveryCluster_Entry.WBP_sw_RealmDiscoveryCluster_Entry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_sw_RealmDiscoveryCluster_Entry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_RealmDiscoveryCluster_Entry_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_sw_RealmDiscoveryCluster_Entry.WBP_sw_RealmDiscoveryCluster_Entry_C.ExecuteUbergraph_WBP_sw_RealmDiscoveryCluster_Entry
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_sw_RealmDiscoveryCluster_Entry_C::ExecuteUbergraph_WBP_sw_RealmDiscoveryCluster_Entry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_RealmDiscoveryCluster_Entry_C", "ExecuteUbergraph_WBP_sw_RealmDiscoveryCluster_Entry");

	Params::UWBP_sw_RealmDiscoveryCluster_Entry_C_ExecuteUbergraph_WBP_sw_RealmDiscoveryCluster_Entry_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}



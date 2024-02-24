#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_SYTX_D_Research2_Bomb.UMG_SYTX_D_Research2_Bomb_C
// (None)

class UClass* UUMG_SYTX_D_Research2_Bomb_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_SYTX_D_Research2_Bomb_C");

	return Clss;
}


// UMG_SYTX_D_Research2_Bomb_C UMG_SYTX_D_Research2_Bomb.Default__UMG_SYTX_D_Research2_Bomb_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_SYTX_D_Research2_Bomb_C* UUMG_SYTX_D_Research2_Bomb_C::GetDefaultObj()
{
	static class UUMG_SYTX_D_Research2_Bomb_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_SYTX_D_Research2_Bomb_C*>(UUMG_SYTX_D_Research2_Bomb_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_SYTX_D_Research2_Bomb.UMG_SYTX_D_Research2_Bomb_C.TickWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_SYTX_D_Research2_Bomb_C::TickWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_SYTX_D_Research2_Bomb_C", "TickWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_SYTX_D_Research2_Bomb.UMG_SYTX_D_Research2_Bomb_C.ExecuteUbergraph_UMG_SYTX_D_Research2_Bomb
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemsStaticRowHandle       CallFunc_MakeLiteralItemsStatic_ReturnValue                      (NoDestructor, HasGetValueTypeHash)
// class UBP_UIProjectionComponent_Generic_C*K2Node_DynamicCast_AsBP_UIProjection_Component_Generic           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EValid                  CallFunc_GetTrait_Paths                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponent*         CallFunc_GetTrait_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UInventory*                  CallFunc_GetInventory_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FindStaticStackTotal_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UUMG_SYTX_D_Research2_Bomb_C::ExecuteUbergraph_UMG_SYTX_D_Research2_Bomb(int32 EntryPoint, const struct FItemsStaticRowHandle& CallFunc_MakeLiteralItemsStatic_ReturnValue, class UBP_UIProjectionComponent_Generic_C* K2Node_DynamicCast_AsBP_UIProjection_Component_Generic, bool K2Node_DynamicCast_bSuccess, enum class EValid CallFunc_GetTrait_Paths, class UInventoryComponent* CallFunc_GetTrait_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UInventory* CallFunc_GetInventory_ReturnValue, int32 CallFunc_FindStaticStackTotal_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_SYTX_D_Research2_Bomb_C", "ExecuteUbergraph_UMG_SYTX_D_Research2_Bomb");

	Params::UUMG_SYTX_D_Research2_Bomb_C_ExecuteUbergraph_UMG_SYTX_D_Research2_Bomb_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MakeLiteralItemsStatic_ReturnValue = CallFunc_MakeLiteralItemsStatic_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_UIProjection_Component_Generic = K2Node_DynamicCast_AsBP_UIProjection_Component_Generic;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetTrait_Paths = CallFunc_GetTrait_Paths;
	Parms.CallFunc_GetTrait_ReturnValue = CallFunc_GetTrait_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetInventory_ReturnValue = CallFunc_GetInventory_ReturnValue;
	Parms.CallFunc_FindStaticStackTotal_ReturnValue = CallFunc_FindStaticStackTotal_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}



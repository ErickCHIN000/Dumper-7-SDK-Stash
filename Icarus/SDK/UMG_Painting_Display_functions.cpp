#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_Painting_Display.UMG_Painting_Display_C
// (None)

class UClass* UUMG_Painting_Display_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_Painting_Display_C");

	return Clss;
}


// UMG_Painting_Display_C UMG_Painting_Display.Default__UMG_Painting_Display_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_Painting_Display_C* UUMG_Painting_Display_C::GetDefaultObj()
{
	static class UUMG_Painting_Display_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_Painting_Display_C*>(UUMG_Painting_Display_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_Painting_Display.UMG_Painting_Display_C.IsSmallPainting
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                      LinkedActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// struct FGameplayTagContainer       CallFunc_GetGameplayTagContainer_OutContainer                    (None)
// bool                               CallFunc_GetGameplayTagContainer_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_MatchesAnyTags_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UUMG_Painting_Display_C::IsSmallPainting(class AActor* LinkedActor, const struct FGameplayTagContainer& CallFunc_GetGameplayTagContainer_OutContainer, bool CallFunc_GetGameplayTagContainer_ReturnValue, bool CallFunc_MatchesAnyTags_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Painting_Display_C", "IsSmallPainting");

	Params::UUMG_Painting_Display_C_IsSmallPainting_Params Parms{};

	Parms.LinkedActor = LinkedActor;
	Parms.CallFunc_GetGameplayTagContainer_OutContainer = CallFunc_GetGameplayTagContainer_OutContainer;
	Parms.CallFunc_GetGameplayTagContainer_ReturnValue = CallFunc_GetGameplayTagContainer_ReturnValue;
	Parms.CallFunc_MatchesAnyTags_ReturnValue = CallFunc_MatchesAnyTags_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG_Painting_Display.UMG_Painting_Display_C.UpdatePaintingDisplay
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPaintingsRowHandle         PaintingRow                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class AActor*                      LinkedActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_Painting_Display_C::UpdatePaintingDisplay(const struct FPaintingsRowHandle& PaintingRow, class AActor* LinkedActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Painting_Display_C", "UpdatePaintingDisplay");

	Params::UUMG_Painting_Display_C_UpdatePaintingDisplay_Params Parms{};

	Parms.PaintingRow = PaintingRow;
	Parms.LinkedActor = LinkedActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_Painting_Display.UMG_Painting_Display_C.ExecuteUbergraph_UMG_Painting_Display
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FPaintingData               CallFunc_GetPaintingsStruct_Paintings                            (None)
// enum class EValid                  CallFunc_GetPaintingsStruct_Paths                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   Temp_wildcard_Variable                                           (HasGetValueTypeHash)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FPaintingsRowHandle         K2Node_CustomEvent_PaintingRow                                   (NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_LinkedActor                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSmallPainting_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsRowHandleValid_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_Painting_Display_C::ExecuteUbergraph_UMG_Painting_Display(int32 EntryPoint, bool Temp_bool_Variable, const struct FPaintingData& CallFunc_GetPaintingsStruct_Paintings, enum class EValid CallFunc_GetPaintingsStruct_Paths, enum class ESlateVisibility Temp_byte_Variable, bool K2Node_SwitchEnum_CmpSuccess, enum class ESlateVisibility Temp_byte_Variable_1, TSoftObjectPtr<class UTexture2D> Temp_wildcard_Variable, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, const struct FPaintingsRowHandle& K2Node_CustomEvent_PaintingRow, class AActor* K2Node_CustomEvent_LinkedActor, bool CallFunc_IsSmallPainting_ReturnValue, bool CallFunc_IsRowHandleValid_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Painting_Display_C", "ExecuteUbergraph_UMG_Painting_Display");

	Params::UUMG_Painting_Display_C_ExecuteUbergraph_UMG_Painting_Display_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetPaintingsStruct_Paintings = CallFunc_GetPaintingsStruct_Paintings;
	Parms.CallFunc_GetPaintingsStruct_Paths = CallFunc_GetPaintingsStruct_Paths;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_wildcard_Variable = Temp_wildcard_Variable;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue = CallFunc_LoadAsset_Blocking_ReturnValue;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.K2Node_DynamicCast_AsTexture_2D = K2Node_DynamicCast_AsTexture_2D;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_PaintingRow = K2Node_CustomEvent_PaintingRow;
	Parms.K2Node_CustomEvent_LinkedActor = K2Node_CustomEvent_LinkedActor;
	Parms.CallFunc_IsSmallPainting_ReturnValue = CallFunc_IsSmallPainting_ReturnValue;
	Parms.CallFunc_IsRowHandleValid_ReturnValue = CallFunc_IsRowHandleValid_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}



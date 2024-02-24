#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_col_ViewableObjectInteractivePoint_01.wid_col_ViewableObjectInteractivePoint_01_C
// (None)

class UClass* UWid_col_ViewableObjectInteractivePoint_01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_col_ViewableObjectInteractivePoint_01_C");

	return Clss;
}


// wid_col_ViewableObjectInteractivePoint_01_C wid_col_ViewableObjectInteractivePoint_01.Default__wid_col_ViewableObjectInteractivePoint_01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_col_ViewableObjectInteractivePoint_01_C* UWid_col_ViewableObjectInteractivePoint_01_C::GetDefaultObj()
{
	static class UWid_col_ViewableObjectInteractivePoint_01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_col_ViewableObjectInteractivePoint_01_C*>(UWid_col_ViewableObjectInteractivePoint_01_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_col_ViewableObjectInteractivePoint_01.wid_col_ViewableObjectInteractivePoint_01_C.SetDisableWhileInFight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               DisableWhileInFight                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_col_ViewableObjectInteractivePoint_01_C::SetDisableWhileInFight(bool DisableWhileInFight)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_col_ViewableObjectInteractivePoint_01_C", "SetDisableWhileInFight");

	Params::UWid_col_ViewableObjectInteractivePoint_01_C_SetDisableWhileInFight_Params Parms{};

	Parms.DisableWhileInFight = DisableWhileInFight;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_col_ViewableObjectInteractivePoint_01.wid_col_ViewableObjectInteractivePoint_01_C.Hide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_col_ViewableObjectInteractivePoint_01_C::Hide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_col_ViewableObjectInteractivePoint_01_C", "Hide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_col_ViewableObjectInteractivePoint_01.wid_col_ViewableObjectInteractivePoint_01_C.ShowNearVersion
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_col_ViewableObjectInteractivePoint_01_C::ShowNearVersion(class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_col_ViewableObjectInteractivePoint_01_C", "ShowNearVersion");

	Params::UWid_col_ViewableObjectInteractivePoint_01_C_ShowNearVersion_Params Parms{};

	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_col_ViewableObjectInteractivePoint_01.wid_col_ViewableObjectInteractivePoint_01_C.SetIndicationMode
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_IndicationCategory InNewIndicationMode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsItPickable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        ItemCategory                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Name                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        Action                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               NotEnough                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               RowFound                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_IndicationCategory IndiCat                                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_1                           (None)
// struct FItemEntry                  CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// struct FSt_InteractionIcon         CallFunc_GetDataTableRowFromName_OutRow_1                        (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSt_InteractionIcon         CallFunc_GetDataTableRowFromName_OutRow_2                        (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// struct FSt_InteractionIcon         K2Node_Select_Default                                            (ContainsInstancedReference, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FText                        K2Node_Select_Default_1                                          (None)
// bool                               CallFunc_NotEqual_TextText_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_TextText_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default_2                                          (None)
// bool                               CallFunc_NotEqual_TextText_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default_3                                          (None)

void UWid_col_ViewableObjectInteractivePoint_01_C::SetIndicationMode(enum class Enum_IndicationCategory InNewIndicationMode, bool IsItPickable, class FName ItemCategory, float Amount, class FText Name, class FText Action, bool NotEnough, bool RowFound, enum class Enum_IndicationCategory IndiCat, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, const struct FItemEntry& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool Temp_bool_Variable_3, const class FString& CallFunc_Concat_StrStr_ReturnValue, const struct FSt_InteractionIcon& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, const struct FSt_InteractionIcon& CallFunc_GetDataTableRowFromName_OutRow_2, bool CallFunc_GetDataTableRowFromName_ReturnValue_2, const class FString& CallFunc_Conv_FloatToString_ReturnValue, const struct FSt_InteractionIcon& K2Node_Select_Default, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, class FText CallFunc_Conv_StringToText_ReturnValue, class FText K2Node_Select_Default_1, bool CallFunc_NotEqual_TextText_ReturnValue, bool CallFunc_NotEqual_TextText_ReturnValue_1, class FText K2Node_Select_Default_2, bool CallFunc_NotEqual_TextText_ReturnValue_2, class FText K2Node_Select_Default_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_col_ViewableObjectInteractivePoint_01_C", "SetIndicationMode");

	Params::UWid_col_ViewableObjectInteractivePoint_01_C_SetIndicationMode_Params Parms{};

	Parms.InNewIndicationMode = InNewIndicationMode;
	Parms.IsItPickable = IsItPickable;
	Parms.ItemCategory = ItemCategory;
	Parms.Amount = Amount;
	Parms.Name = Name;
	Parms.Action = Action;
	Parms.NotEnough = NotEnough;
	Parms.RowFound = RowFound;
	Parms.IndiCat = IndiCat;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue_1 = CallFunc_MakeLiteralText_ReturnValue_1;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_1 = CallFunc_GetDataTableRowFromName_OutRow_1;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_1 = CallFunc_GetDataTableRowFromName_ReturnValue_1;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_2 = CallFunc_GetDataTableRowFromName_OutRow_2;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_2 = CallFunc_GetDataTableRowFromName_ReturnValue_2;
	Parms.CallFunc_Conv_FloatToString_ReturnValue = CallFunc_Conv_FloatToString_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_NotEqual_TextText_ReturnValue = CallFunc_NotEqual_TextText_ReturnValue;
	Parms.CallFunc_NotEqual_TextText_ReturnValue_1 = CallFunc_NotEqual_TextText_ReturnValue_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_NotEqual_TextText_ReturnValue_2 = CallFunc_NotEqual_TextText_ReturnValue_2;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_col_ViewableObjectInteractivePoint_01.wid_col_ViewableObjectInteractivePoint_01_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_col_ViewableObjectInteractivePoint_01_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_col_ViewableObjectInteractivePoint_01_C", "PreConstruct");

	Params::UWid_col_ViewableObjectInteractivePoint_01_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_col_ViewableObjectInteractivePoint_01.wid_col_ViewableObjectInteractivePoint_01_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_col_ViewableObjectInteractivePoint_01_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_col_ViewableObjectInteractivePoint_01_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_col_ViewableObjectInteractivePoint_01.wid_col_ViewableObjectInteractivePoint_01_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_col_ViewableObjectInteractivePoint_01_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_col_ViewableObjectInteractivePoint_01_C", "Tick");

	Params::UWid_col_ViewableObjectInteractivePoint_01_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_col_ViewableObjectInteractivePoint_01.wid_col_ViewableObjectInteractivePoint_01_C.Update
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_col_ViewableObjectInteractivePoint_01_C::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_col_ViewableObjectInteractivePoint_01_C", "Update");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_col_ViewableObjectInteractivePoint_01.wid_col_ViewableObjectInteractivePoint_01_C.BindMenuToggled
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_col_ViewableObjectInteractivePoint_01_C::BindMenuToggled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_col_ViewableObjectInteractivePoint_01_C", "BindMenuToggled");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_col_ViewableObjectInteractivePoint_01.wid_col_ViewableObjectInteractivePoint_01_C.UnbindMenuToggled
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_col_ViewableObjectInteractivePoint_01_C::UnbindMenuToggled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_col_ViewableObjectInteractivePoint_01_C", "UnbindMenuToggled");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_col_ViewableObjectInteractivePoint_01.wid_col_ViewableObjectInteractivePoint_01_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsPaused                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_col_ViewableObjectInteractivePoint_01_C::CustomEvent_0(bool IsPaused)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_col_ViewableObjectInteractivePoint_01_C", "CustomEvent_0");

	Params::UWid_col_ViewableObjectInteractivePoint_01_C_CustomEvent_0_Params Parms{};

	Parms.IsPaused = IsPaused;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_col_ViewableObjectInteractivePoint_01.wid_col_ViewableObjectInteractivePoint_01_C.ExecuteUbergraph_wid_col_ViewableObjectInteractivePoint_01
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlayerAbleToInteract_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsPaused                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_col_ViewableObjectInteractivePoint_01_C::ExecuteUbergraph_wid_col_ViewableObjectInteractivePoint_01(int32 EntryPoint, bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool K2Node_Event_IsDesignTime, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, bool CallFunc_IsPlayerAbleToInteract_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FLinearColor& K2Node_Select_Default, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, const struct FSlateColor& K2Node_MakeStruct_SlateColor, enum class ESlateVisibility K2Node_Select_Default_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, bool K2Node_CustomEvent_IsPaused, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, enum class ESlateVisibility K2Node_Select_Default_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_col_ViewableObjectInteractivePoint_01_C", "ExecuteUbergraph_wid_col_ViewableObjectInteractivePoint_01");

	Params::UWid_col_ViewableObjectInteractivePoint_01_C_ExecuteUbergraph_wid_col_ViewableObjectInteractivePoint_01_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_IsPlayerAbleToInteract_ReturnValue = CallFunc_IsPlayerAbleToInteract_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.K2Node_CustomEvent_IsPaused = K2Node_CustomEvent_IsPaused;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_1 = CallFunc_GetCGGameInstance_AsCGGame_Instance_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_col_ViewableObjectInteractivePoint_01.wid_col_ViewableObjectInteractivePoint_01_C.OnSetHidden__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_col_ViewableObjectInteractivePoint_01_C::OnSetHidden__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_col_ViewableObjectInteractivePoint_01_C", "OnSetHidden__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_col_ViewableObjectInteractivePoint_01.wid_col_ViewableObjectInteractivePoint_01_C.OnSetVisible__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_col_ViewableObjectInteractivePoint_01_C::OnSetVisible__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_col_ViewableObjectInteractivePoint_01_C", "OnSetVisible__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}



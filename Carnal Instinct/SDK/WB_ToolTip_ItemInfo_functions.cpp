#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_ToolTip_ItemInfo.WB_ToolTip_ItemInfo_C
// (None)

class UClass* UWB_ToolTip_ItemInfo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_ToolTip_ItemInfo_C");

	return Clss;
}


// WB_ToolTip_ItemInfo_C WB_ToolTip_ItemInfo.Default__WB_ToolTip_ItemInfo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_ToolTip_ItemInfo_C* UWB_ToolTip_ItemInfo_C::GetDefaultObj()
{
	static class UWB_ToolTip_ItemInfo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_ToolTip_ItemInfo_C*>(UWB_ToolTip_ItemInfo_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_ToolTip_ItemInfo.WB_ToolTip_ItemInfo_C.Set Image
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)

struct FSlateBrush UWB_ToolTip_ItemInfo_C::Set_Image(const struct FSlateBrush& K2Node_MakeStruct_SlateBrush)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_ToolTip_ItemInfo_C", "Set Image");

	Params::UWB_ToolTip_ItemInfo_C_Set_Image_Params Parms{};

	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_ToolTip_ItemInfo.WB_ToolTip_ItemInfo_C.Set Rarity Text Color
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 CallFunc_Set_Rarity_Color_Color                                  (None)

struct FSlateColor UWB_ToolTip_ItemInfo_C::Set_Rarity_Text_Color(bool CallFunc_IsValid_ReturnValue, const struct FSlateColor& CallFunc_Set_Rarity_Color_Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_ToolTip_ItemInfo_C", "Set Rarity Text Color");

	Params::UWB_ToolTip_ItemInfo_C_Set_Rarity_Text_Color_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Set_Rarity_Color_Color = CallFunc_Set_Rarity_Color_Color;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_ToolTip_ItemInfo.WB_ToolTip_ItemInfo_C.Set Rarity
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

class FText UWB_ToolTip_ItemInfo_C::Set_Rarity(const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_ToolTip_ItemInfo_C", "Set Rarity");

	Params::UWB_ToolTip_ItemInfo_C_Set_Rarity_Params Parms{};

	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_ToolTip_ItemInfo.WB_ToolTip_ItemInfo_C.Set Type
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

class FText UWB_ToolTip_ItemInfo_C::Set_Type(const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_ToolTip_ItemInfo_C", "Set Type");

	Params::UWB_ToolTip_ItemInfo_C_Set_Type_Params Parms{};

	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_ToolTip_ItemInfo.WB_ToolTip_ItemInfo_C.Set Name
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)

class FText UWB_ToolTip_ItemInfo_C::Set_Name()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_ToolTip_ItemInfo_C", "Set Name");

	Params::UWB_ToolTip_ItemInfo_C_Set_Name_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}



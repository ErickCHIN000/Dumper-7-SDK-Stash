#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MenuDataEntry_Codex.BP_MenuDataEntry_Codex_C
// (None)

class UClass* UBP_MenuDataEntry_Codex_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MenuDataEntry_Codex_C");

	return Clss;
}


// BP_MenuDataEntry_Codex_C BP_MenuDataEntry_Codex.Default__BP_MenuDataEntry_Codex_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_MenuDataEntry_Codex_C* UBP_MenuDataEntry_Codex_C::GetDefaultObj()
{
	static class UBP_MenuDataEntry_Codex_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_MenuDataEntry_Codex_C*>(UBP_MenuDataEntry_Codex_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_MenuDataEntry_Codex.BP_MenuDataEntry_Codex_C.GetID
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FGuid                       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCodexBaseDataAsset*         CallFunc_GetCodexDataAsset_CodexDataAsset                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_GetCodexAssetUniqueId_OutUniqueID                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FGuid UBP_MenuDataEntry_Codex_C::GetID(class UCodexBaseDataAsset* CallFunc_GetCodexDataAsset_CodexDataAsset, const struct FGuid& CallFunc_GetCodexAssetUniqueId_OutUniqueID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuDataEntry_Codex_C", "GetID");

	Params::UBP_MenuDataEntry_Codex_C_GetID_Params Parms{};

	Parms.CallFunc_GetCodexDataAsset_CodexDataAsset = CallFunc_GetCodexDataAsset_CodexDataAsset;
	Parms.CallFunc_GetCodexAssetUniqueId_OutUniqueID = CallFunc_GetCodexAssetUniqueId_OutUniqueID;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_MenuDataEntry_Codex.BP_MenuDataEntry_Codex_C.GetDescription
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class UCodexBaseDataAsset*         CallFunc_GetCodexDataAsset_CodexDataAsset                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCodexSubentry              CallFunc_Array_Get_Item                                          (None)

class FText UBP_MenuDataEntry_Codex_C::GetDescription(class UCodexBaseDataAsset* CallFunc_GetCodexDataAsset_CodexDataAsset, bool CallFunc_Array_IsValidIndex_ReturnValue, const struct FCodexSubentry& CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuDataEntry_Codex_C", "GetDescription");

	Params::UBP_MenuDataEntry_Codex_C_GetDescription_Params Parms{};

	Parms.CallFunc_GetCodexDataAsset_CodexDataAsset = CallFunc_GetCodexDataAsset_CodexDataAsset;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_MenuDataEntry_Codex.BP_MenuDataEntry_Codex_C.IsUnlocked
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerState_C*           CallFunc_GetLocalPlayerState_PlayerState                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCodexTrackerComponent*      CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ICodexTrackerInterface>CallFunc_HasUnlockedAnySubentry_self_CastInput                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasUnlockedAnySubentry_OutUnlocked                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_MenuDataEntry_Codex_C::IsUnlocked(class ABP_PlayerState_C* CallFunc_GetLocalPlayerState_PlayerState, class UCodexTrackerComponent* CallFunc_GetComponentByClass_ReturnValue, TScriptInterface<class ICodexTrackerInterface> CallFunc_HasUnlockedAnySubentry_self_CastInput, bool CallFunc_HasUnlockedAnySubentry_OutUnlocked, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuDataEntry_Codex_C", "IsUnlocked");

	Params::UBP_MenuDataEntry_Codex_C_IsUnlocked_Params Parms{};

	Parms.CallFunc_GetLocalPlayerState_PlayerState = CallFunc_GetLocalPlayerState_PlayerState;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_HasUnlockedAnySubentry_self_CastInput = CallFunc_HasUnlockedAnySubentry_self_CastInput;
	Parms.CallFunc_HasUnlockedAnySubentry_OutUnlocked = CallFunc_HasUnlockedAnySubentry_OutUnlocked;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_MenuDataEntry_Codex.BP_MenuDataEntry_Codex_C.GetImage
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               IsValidReference                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   EntryImage                                                       (Parm, OutParm, UObjectWrapper, HasGetValueTypeHash)
// class UCodexBaseDataAsset*         CallFunc_GetCodexDataAsset_CodexDataAsset                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MenuDataEntry_Codex_C::GetImage(bool* IsValidReference, TSoftObjectPtr<class UTexture2D>* EntryImage, class UCodexBaseDataAsset* CallFunc_GetCodexDataAsset_CodexDataAsset, bool CallFunc_IsValidSoftObjectReference_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuDataEntry_Codex_C", "GetImage");

	Params::UBP_MenuDataEntry_Codex_C_GetImage_Params Parms{};

	Parms.CallFunc_GetCodexDataAsset_CodexDataAsset = CallFunc_GetCodexDataAsset_CodexDataAsset;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsValidReference != nullptr)
		*IsValidReference = Parms.IsValidReference;

	if (EntryImage != nullptr)
		*EntryImage = Parms.EntryImage;

}


// Function BP_MenuDataEntry_Codex.BP_MenuDataEntry_Codex_C.GetDisplayName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class UCodexBaseDataAsset*         CallFunc_GetCodexDataAsset_CodexDataAsset                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

class FText UBP_MenuDataEntry_Codex_C::GetDisplayName(class UCodexBaseDataAsset* CallFunc_GetCodexDataAsset_CodexDataAsset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuDataEntry_Codex_C", "GetDisplayName");

	Params::UBP_MenuDataEntry_Codex_C_GetDisplayName_Params Parms{};

	Parms.CallFunc_GetCodexDataAsset_CodexDataAsset = CallFunc_GetCodexDataAsset_CodexDataAsset;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_MenuDataEntry_Codex.BP_MenuDataEntry_Codex_C.GetSortingGroups
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FGameplayTagContainer       ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class UCodexBaseDataAsset*         CallFunc_GetCodexDataAsset_CodexDataAsset                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

struct FGameplayTagContainer UBP_MenuDataEntry_Codex_C::GetSortingGroups(class UCodexBaseDataAsset* CallFunc_GetCodexDataAsset_CodexDataAsset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuDataEntry_Codex_C", "GetSortingGroups");

	Params::UBP_MenuDataEntry_Codex_C_GetSortingGroups_Params Parms{};

	Parms.CallFunc_GetCodexDataAsset_CodexDataAsset = CallFunc_GetCodexDataAsset_CodexDataAsset;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_MenuDataEntry_Codex.BP_MenuDataEntry_Codex_C.GetTooltipWidget
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        Tooltip_Subentry                                                 (Edit, BlueprintVisible)
// class UWBP_Tooltip_CodexEntry_C*   CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetDescription_ReturnValue                              (None)
// class FText                        CallFunc_GetDescription_ReturnValue_1                            (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetSubstring_ReturnValue                                (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Len_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// bool                               CallFunc_GetImage_IsValidReference                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   CallFunc_GetImage_EntryImage                                     (UObjectWrapper, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FText                        CallFunc_GetDisplayName_ReturnValue                              (None)

class UWidget* UBP_MenuDataEntry_Codex_C::GetTooltipWidget(class FText Tooltip_Subentry, class UWBP_Tooltip_CodexEntry_C* CallFunc_Create_ReturnValue, class FText CallFunc_GetDescription_ReturnValue, class FText CallFunc_GetDescription_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_GetSubstring_ReturnValue, int32 CallFunc_Len_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_GetImage_IsValidReference, TSoftObjectPtr<class UTexture2D> CallFunc_GetImage_EntryImage, class FText CallFunc_Format_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuDataEntry_Codex_C", "GetTooltipWidget");

	Params::UBP_MenuDataEntry_Codex_C_GetTooltipWidget_Params Parms{};

	Parms.Tooltip_Subentry = Tooltip_Subentry;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetDescription_ReturnValue = CallFunc_GetDescription_ReturnValue;
	Parms.CallFunc_GetDescription_ReturnValue_1 = CallFunc_GetDescription_ReturnValue_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_GetSubstring_ReturnValue = CallFunc_GetSubstring_ReturnValue;
	Parms.CallFunc_Len_ReturnValue = CallFunc_Len_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetImage_IsValidReference = CallFunc_GetImage_IsValidReference;
	Parms.CallFunc_GetImage_EntryImage = CallFunc_GetImage_EntryImage;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_MenuDataEntry_Codex.BP_MenuDataEntry_Codex_C.GetCodexDataAsset
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UCodexBaseDataAsset*         CodexDataAsset                                                   (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_MenuDataEntry_Codex_C::GetCodexDataAsset(class UCodexBaseDataAsset** CodexDataAsset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuDataEntry_Codex_C", "GetCodexDataAsset");

	Params::UBP_MenuDataEntry_Codex_C_GetCodexDataAsset_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CodexDataAsset != nullptr)
		*CodexDataAsset = Parms.CodexDataAsset;

}


// Function BP_MenuDataEntry_Codex.BP_MenuDataEntry_Codex_C.SetCodexDataAsset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCodexBaseDataAsset*         CodexDataAsset                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_MenuDataEntry_Codex_C::SetCodexDataAsset(class UCodexBaseDataAsset* CodexDataAsset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuDataEntry_Codex_C", "SetCodexDataAsset");

	Params::UBP_MenuDataEntry_Codex_C_SetCodexDataAsset_Params Parms{};

	Parms.CodexDataAsset = CodexDataAsset;

	UObject::ProcessEvent(Func, &Parms);

}

}



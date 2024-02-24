#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_MainMenu_Extras.wid_MainMenu_Extras_C
// (None)

class UClass* UWid_MainMenu_Extras_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_MainMenu_Extras_C");

	return Clss;
}


// wid_MainMenu_Extras_C wid_MainMenu_Extras.Default__wid_MainMenu_Extras_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_MainMenu_Extras_C* UWid_MainMenu_Extras_C::GetDefaultObj()
{
	static class UWid_MainMenu_Extras_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_MainMenu_Extras_C*>(UWid_MainMenu_Extras_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_MainMenu_Extras.wid_MainMenu_Extras_C.OnMakarovSkinChanged
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              DLCOption                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_Extras_C::OnMakarovSkinChanged(int32 DLCOption)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Extras_C", "OnMakarovSkinChanged");

	Params::UWid_MainMenu_Extras_C_OnMakarovSkinChanged_Params Parms{};

	Parms.DLCOption = DLCOption;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_Extras.wid_MainMenu_Extras_C.OnOthersSkinChanged
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              DLCOption                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_Extras_C::OnOthersSkinChanged(int32 DLCOption)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Extras_C", "OnOthersSkinChanged");

	Params::UWid_MainMenu_Extras_C_OnOthersSkinChanged_Params Parms{};

	Parms.DLCOption = DLCOption;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_Extras.wid_MainMenu_Extras_C.OnCharactersSkinChanged
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              DLCOption                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_Extras_C::OnCharactersSkinChanged(int32 DLCOption)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Extras_C", "OnCharactersSkinChanged");

	Params::UWid_MainMenu_Extras_C_OnCharactersSkinChanged_Params Parms{};

	Parms.DLCOption = DLCOption;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_Extras.wid_MainMenu_Extras_C.OnDecorationSkinChanged
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              DLCOption                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_Extras_C::OnDecorationSkinChanged(int32 DLCOption)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Extras_C", "OnDecorationSkinChanged");

	Params::UWid_MainMenu_Extras_C_OnDecorationSkinChanged_Params Parms{};

	Parms.DLCOption = DLCOption;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_Extras.wid_MainMenu_Extras_C.SaveGlobalSkin
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWid_MainMenu_graphics_Option_C*SkinWidget                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGlobalSkinType         SkinType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                SkinDataRef                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FWeaponSkinInfo>     AvailableSkins                                                   (Edit, BlueprintVisible)
// TArray<class FText>                Data                                                             (Edit, BlueprintVisible)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentlySelectedIndex_CurrentlySelected             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_MainMenu_Extras_C::SaveGlobalSkin(class UWid_MainMenu_graphics_Option_C* SkinWidget, enum class EGlobalSkinType SkinType, TArray<class FName>& SkinDataRef, const TArray<struct FWeaponSkinInfo>& AvailableSkins, const TArray<class FText>& Data, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected, bool CallFunc_Less_IntInt_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_NameName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Extras_C", "SaveGlobalSkin");

	Params::UWid_MainMenu_Extras_C_SaveGlobalSkin_Params Parms{};

	Parms.SkinWidget = SkinWidget;
	Parms.SkinType = SkinType;
	Parms.SkinDataRef = SkinDataRef;
	Parms.AvailableSkins = AvailableSkins;
	Parms.Data = Data;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_1 = CallFunc_GetCGGameInstance_AsCGGame_Instance_1;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_GetCurrentlySelectedIndex_CurrentlySelected = CallFunc_GetCurrentlySelectedIndex_CurrentlySelected;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_Extras.wid_MainMenu_Extras_C.PopulateGlobalSkinData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWid_MainMenu_graphics_Option_C*SkinWidget                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGlobalSkinType         SkinType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                SkinDataRef                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FGlobalSkinInfo>     AllAvailableSkins                                                (Edit, BlueprintVisible)
// TArray<class FText>                Data                                                             (Edit, BlueprintVisible)
// class FText                        Temp_text_Variable                                               (ConstParm)
// class FName                        Temp_name_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGlobalSkinInfo             CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class ISelectableEntryInterace_C>CallFunc_GetSelectableIndex_Target_CastInput                     (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
// int32                              CallFunc_GetSelectableIndex_EntryIndex                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FText>                K2Node_MakeArray_Array                                           (ReferenceParm)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetGlobalSkinType_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectInt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGlobalSkinInfo>     CallFunc_K2_GetAvailableGlobalSkinsForType_ReturnValue           (ReferenceParm)

void UWid_MainMenu_Extras_C::PopulateGlobalSkinData(class UWid_MainMenu_graphics_Option_C* SkinWidget, enum class EGlobalSkinType SkinType, TArray<class FName>& SkinDataRef, const TArray<struct FGlobalSkinInfo>& AllAvailableSkins, const TArray<class FText>& Data, class FText Temp_text_Variable, class FName Temp_name_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const struct FGlobalSkinInfo& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetSelectableIndex_Target_CastInput, int32 CallFunc_GetSelectableIndex_EntryIndex, TArray<class FText>& K2Node_MakeArray_Array, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, class FName CallFunc_GetGlobalSkinType_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, int32 CallFunc_Array_Add_ReturnValue_3, TArray<struct FGlobalSkinInfo>& CallFunc_K2_GetAvailableGlobalSkinsForType_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Extras_C", "PopulateGlobalSkinData");

	Params::UWid_MainMenu_Extras_C_PopulateGlobalSkinData_Params Parms{};

	Parms.SkinWidget = SkinWidget;
	Parms.SkinType = SkinType;
	Parms.SkinDataRef = SkinDataRef;
	Parms.AllAvailableSkins = AllAvailableSkins;
	Parms.Data = Data;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetSelectableIndex_Target_CastInput = CallFunc_GetSelectableIndex_Target_CastInput;
	Parms.CallFunc_GetSelectableIndex_EntryIndex = CallFunc_GetSelectableIndex_EntryIndex;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetGlobalSkinType_ReturnValue = CallFunc_GetGlobalSkinType_ReturnValue;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_Array_Add_ReturnValue_3 = CallFunc_Array_Add_ReturnValue_3;
	Parms.CallFunc_K2_GetAvailableGlobalSkinsForType_ReturnValue = CallFunc_K2_GetAvailableGlobalSkinsForType_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_Extras.wid_MainMenu_Extras_C.OnCrossbowSkinChanged
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              DLCOption                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_Extras_C::OnCrossbowSkinChanged(int32 DLCOption)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Extras_C", "OnCrossbowSkinChanged");

	Params::UWid_MainMenu_Extras_C_OnCrossbowSkinChanged_Params Parms{};

	Parms.DLCOption = DLCOption;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_Extras.wid_MainMenu_Extras_C.OnRailgunSkinChanged
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              DLCOption                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_Extras_C::OnRailgunSkinChanged(int32 DLCOption)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Extras_C", "OnRailgunSkinChanged");

	Params::UWid_MainMenu_Extras_C_OnRailgunSkinChanged_Params Parms{};

	Parms.DLCOption = DLCOption;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_Extras.wid_MainMenu_Extras_C.OnBlasterSkinChanged
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              DLCOption                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_Extras_C::OnBlasterSkinChanged(int32 DLCOption)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Extras_C", "OnBlasterSkinChanged");

	Params::UWid_MainMenu_Extras_C_OnBlasterSkinChanged_Params Parms{};

	Parms.DLCOption = DLCOption;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_Extras.wid_MainMenu_Extras_C.OnAK47SkinChagned
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              DLCOption                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_Extras_C::OnAK47SkinChagned(int32 DLCOption)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Extras_C", "OnAK47SkinChagned");

	Params::UWid_MainMenu_Extras_C_OnAK47SkinChagned_Params Parms{};

	Parms.DLCOption = DLCOption;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_Extras.wid_MainMenu_Extras_C.OnMP133SkinChagned
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              DLCOption                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_Extras_C::OnMP133SkinChagned(int32 DLCOption)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Extras_C", "OnMP133SkinChagned");

	Params::UWid_MainMenu_Extras_C_OnMP133SkinChagned_Params Parms{};

	Parms.DLCOption = DLCOption;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_Extras.wid_MainMenu_Extras_C.OnWheellockPistolSkinChanged
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              DLCOption                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_Extras_C::OnWheellockPistolSkinChanged(int32 DLCOption)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Extras_C", "OnWheellockPistolSkinChanged");

	Params::UWid_MainMenu_Extras_C_OnWheellockPistolSkinChanged_Params Parms{};

	Parms.DLCOption = DLCOption;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_Extras.wid_MainMenu_Extras_C.OnKnifeSkinChanged
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              DLCOption                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_Extras_C::OnKnifeSkinChanged(int32 DLCOption)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Extras_C", "OnKnifeSkinChanged");

	Params::UWid_MainMenu_Extras_C_OnKnifeSkinChanged_Params Parms{};

	Parms.DLCOption = DLCOption;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_Extras.wid_MainMenu_Extras_C.SaveWeaponSkin
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWid_MainMenu_graphics_Option_C*SkinWidget                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWeaponSkinType         SkinType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                SkinDataRef                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FWeaponSkinInfo>     AvailableSkins                                                   (Edit, BlueprintVisible)
// TArray<class FText>                Data                                                             (Edit, BlueprintVisible)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACGWeapon*                   K2Node_DynamicCast_AsCGWeapon                                    (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWeaponSkinType         CallFunc_ItemIdToWeaponSkinType_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetCurrentlySelectedIndex_CurrentlySelected             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_MainMenu_Extras_C::SaveWeaponSkin(class UWid_MainMenu_graphics_Option_C* SkinWidget, enum class EWeaponSkinType SkinType, TArray<class FName>& SkinDataRef, const TArray<struct FWeaponSkinInfo>& AvailableSkins, const TArray<class FText>& Data, int32 CallFunc_Array_Length_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, bool CallFunc_Greater_IntInt_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, class ACGWeapon* K2Node_DynamicCast_AsCGWeapon, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue_1, enum class EWeaponSkinType CallFunc_ItemIdToWeaponSkinType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Extras_C", "SaveWeaponSkin");

	Params::UWid_MainMenu_Extras_C_SaveWeaponSkin_Params Parms{};

	Parms.SkinWidget = SkinWidget;
	Parms.SkinType = SkinType;
	Parms.SkinDataRef = SkinDataRef;
	Parms.AvailableSkins = AvailableSkins;
	Parms.Data = Data;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.K2Node_DynamicCast_AsCGWeapon = K2Node_DynamicCast_AsCGWeapon;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_ItemIdToWeaponSkinType_ReturnValue = CallFunc_ItemIdToWeaponSkinType_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetCurrentlySelectedIndex_CurrentlySelected = CallFunc_GetCurrentlySelectedIndex_CurrentlySelected;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_Extras.wid_MainMenu_Extras_C.PopulateAllSkinsData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Extras_C::PopulateAllSkinsData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Extras_C", "PopulateAllSkinsData");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Extras.wid_MainMenu_Extras_C.GetDLCName
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EDLCType                Key                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Value                                                            (Parm, OutParm)
// class FText                        CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_MainMenu_Extras_C::GetDLCName(enum class EDLCType& Key, class FText* Value, class FText CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Extras_C", "GetDLCName");

	Params::UWid_MainMenu_Extras_C_GetDLCName_Params Parms{};

	Parms.Key = Key;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function wid_MainMenu_Extras.wid_MainMenu_Extras_C.PopulateWeaponSkinData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWid_MainMenu_graphics_Option_C*SkinWidget                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWeaponSkinType         SkinType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                SkinDataRef                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FWeaponSkinInfo>     AvailableSkins                                                   (Edit, BlueprintVisible)
// TArray<class FText>                Data                                                             (Edit, BlueprintVisible)
// class FText                        Temp_text_Variable                                               (ConstParm)
// class FName                        Temp_name_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ISelectableEntryInterace_C>CallFunc_GetSelectableIndex_Target_CastInput                     (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
// int32                              CallFunc_GetSelectableIndex_EntryIndex                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FText>                K2Node_MakeArray_Array                                           (ReferenceParm)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetWeaponSkin_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectInt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWeaponSkinInfo             CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetDLCName_Value                                        (None)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FWeaponSkinInfo>     CallFunc_K2_GetAvailableWeaponSkinsForType_ReturnValue           (ReferenceParm)

void UWid_MainMenu_Extras_C::PopulateWeaponSkinData(class UWid_MainMenu_graphics_Option_C* SkinWidget, enum class EWeaponSkinType SkinType, TArray<class FName>& SkinDataRef, const TArray<struct FWeaponSkinInfo>& AvailableSkins, const TArray<class FText>& Data, class FText Temp_text_Variable, class FName Temp_name_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetSelectableIndex_Target_CastInput, int32 CallFunc_GetSelectableIndex_EntryIndex, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class FText>& K2Node_MakeArray_Array, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, class FName CallFunc_GetWeaponSkin_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, const struct FWeaponSkinInfo& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, class FText CallFunc_GetDLCName_Value, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_3, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, TArray<struct FWeaponSkinInfo>& CallFunc_K2_GetAvailableWeaponSkinsForType_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Extras_C", "PopulateWeaponSkinData");

	Params::UWid_MainMenu_Extras_C_PopulateWeaponSkinData_Params Parms{};

	Parms.SkinWidget = SkinWidget;
	Parms.SkinType = SkinType;
	Parms.SkinDataRef = SkinDataRef;
	Parms.AvailableSkins = AvailableSkins;
	Parms.Data = Data;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetSelectableIndex_Target_CastInput = CallFunc_GetSelectableIndex_Target_CastInput;
	Parms.CallFunc_GetSelectableIndex_EntryIndex = CallFunc_GetSelectableIndex_EntryIndex;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetWeaponSkin_ReturnValue = CallFunc_GetWeaponSkin_ReturnValue;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetDLCName_Value = CallFunc_GetDLCName_Value;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_Array_Add_ReturnValue_3 = CallFunc_Array_Add_ReturnValue_3;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_K2_GetAvailableWeaponSkinsForType_ReturnValue = CallFunc_K2_GetAvailableWeaponSkinsForType_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_Extras.wid_MainMenu_Extras_C.GetSelectableIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TScriptInterface<class ISelectableEntryInterace_C>Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
// int32                              EntryIndex                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetEntryIndex_EntryIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_Extras_C::GetSelectableIndex(TScriptInterface<class ISelectableEntryInterace_C> Target, int32* EntryIndex, int32 CallFunc_GetEntryIndex_EntryIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Extras_C", "GetSelectableIndex");

	Params::UWid_MainMenu_Extras_C_GetSelectableIndex_Params Parms{};

	Parms.Target = Target;
	Parms.CallFunc_GetEntryIndex_EntryIndex = CallFunc_GetEntryIndex_EntryIndex;

	UObject::ProcessEvent(Func, &Parms);

	if (EntryIndex != nullptr)
		*EntryIndex = Parms.EntryIndex;

}


// Function wid_MainMenu_Extras.wid_MainMenu_Extras_C.SetupLabel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// class FText                        CallFunc_FormatText_Output                                       (None)

void UWid_MainMenu_Extras_C::SetupLabel(class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_FormatText_Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Extras_C", "SetupLabel");

	Params::UWid_MainMenu_Extras_C_SetupLabel_Params Parms{};

	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_FormatText_Output = CallFunc_FormatText_Output;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_Extras.wid_MainMenu_Extras_C.Set Background Visibility
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_Extras_C::Set_Background_Visibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Extras_C", "Set Background Visibility");

	Params::UWid_MainMenu_Extras_C_Set_Background_Visibility_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_Extras.wid_MainMenu_Extras_C.Setup Events
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_11                          (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_12                          (ZeroConstructor, NoDestructor)

void UWid_MainMenu_Extras_C::Setup_Events(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Extras_C", "Setup Events");

	Params::UWid_MainMenu_Extras_C_Setup_Events_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.K2Node_CreateDelegate_OutputDelegate_11 = K2Node_CreateDelegate_OutputDelegate_11;
	Parms.K2Node_CreateDelegate_OutputDelegate_12 = K2Node_CreateDelegate_OutputDelegate_12;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_Extras.wid_MainMenu_Extras_C.Load Settings
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Extras_C::Load_Settings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Extras_C", "Load Settings");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Extras.wid_MainMenu_Extras_C.Setup Selectable Manager
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<TScriptInterface<class ISelectableEntryInterace_C>>K2Node_MakeArray_Array                                           (ReferenceParm)

void UWid_MainMenu_Extras_C::Setup_Selectable_Manager(TArray<TScriptInterface<class ISelectableEntryInterace_C>>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Extras_C", "Setup Selectable Manager");

	Params::UWid_MainMenu_Extras_C_Setup_Selectable_Manager_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_Extras.wid_MainMenu_Extras_C.Close
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Extras_C::Close()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Extras_C", "Close");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Extras.wid_MainMenu_Extras_C.Set Default Values
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Extras_C::Set_Default_Values()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Extras_C", "Set Default Values");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Extras.wid_MainMenu_Extras_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_MainMenu_Extras_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Extras_C", "PreConstruct");

	Params::UWid_MainMenu_Extras_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_Extras.wid_MainMenu_Extras_C.SetDefault
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Extras_C::SetDefault()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Extras_C", "SetDefault");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Extras.wid_MainMenu_Extras_C.Up
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Extras_C::Up()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Extras_C", "Up");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Extras.wid_MainMenu_Extras_C.Down
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Extras_C::Down()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Extras_C", "Down");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Extras.wid_MainMenu_Extras_C.Left
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Extras_C::Left()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Extras_C", "Left");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Extras.wid_MainMenu_Extras_C.Right
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Extras_C::Right()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Extras_C", "Right");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Extras.wid_MainMenu_Extras_C.BackPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Extras_C::BackPressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Extras_C", "BackPressed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Extras.wid_MainMenu_Extras_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Extras_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Extras_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Extras.wid_MainMenu_Extras_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_Extras_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Extras_C", "Tick");

	Params::UWid_MainMenu_Extras_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_Extras.wid_MainMenu_Extras_C.ExecuteUbergraph_wid_MainMenu_Extras
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_Extras_C::ExecuteUbergraph_wid_MainMenu_Extras(int32 EntryPoint, bool K2Node_Event_IsDesignTime, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Extras_C", "ExecuteUbergraph_wid_MainMenu_Extras");

	Params::UWid_MainMenu_Extras_C_ExecuteUbergraph_wid_MainMenu_Extras_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}

}



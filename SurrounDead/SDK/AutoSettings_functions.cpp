#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class AutoSettings.AutoSettingsConfig
// (None)

class UClass* UAutoSettingsConfig::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AutoSettingsConfig");

	return Clss;
}


// AutoSettingsConfig AutoSettings.Default__AutoSettingsConfig
// (Public, ClassDefaultObject, ArchetypeObject)

class UAutoSettingsConfig* UAutoSettingsConfig::GetDefaultObj()
{
	static class UAutoSettingsConfig* Default = nullptr;

	if (!Default)
		Default = static_cast<UAutoSettingsConfig*>(UAutoSettingsConfig::StaticClass()->DefaultObject);

	return Default;
}


// Class AutoSettings.AutoSettingWidget
// (None)

class UClass* UAutoSettingWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AutoSettingWidget");

	return Clss;
}


// AutoSettingWidget AutoSettings.Default__AutoSettingWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UAutoSettingWidget* UAutoSettingWidget::GetDefaultObj()
{
	static class UAutoSettingWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UAutoSettingWidget*>(UAutoSettingWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function AutoSettings.AutoSettingWidget.UpdateSelection
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// class FString                      Value                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAutoSettingWidget::UpdateSelection(const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AutoSettingWidget", "UpdateSelection");

	Params::UAutoSettingWidget_UpdateSelection_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AutoSettings.AutoSettingWidget.Save
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAutoSettingWidget::Save()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AutoSettingWidget", "Save");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AutoSettings.AutoSettingWidget.HasUnsavedChange
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAutoSettingWidget::HasUnsavedChange()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AutoSettingWidget", "HasUnsavedChange");

	Params::UAutoSettingWidget_HasUnsavedChange_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AutoSettings.AutoSettingWidget.HasUnappliedChange
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAutoSettingWidget::HasUnappliedChange()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AutoSettingWidget", "HasUnappliedChange");

	Params::UAutoSettingWidget_HasUnappliedChange_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AutoSettings.AutoSettingWidget.Cancel
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAutoSettingWidget::Cancel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AutoSettingWidget", "Cancel");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AutoSettings.AutoSettingWidget.ApplySettingValue
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class FString                      Value                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSaveIfPossible                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAutoSettingWidget::ApplySettingValue(const class FString& Value, bool bSaveIfPossible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AutoSettingWidget", "ApplySettingValue");

	Params::UAutoSettingWidget_ApplySettingValue_Params Parms{};

	Parms.Value = Value;
	Parms.bSaveIfPossible = bSaveIfPossible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AutoSettings.AutoSettingWidget.Apply
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAutoSettingWidget::Apply()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AutoSettingWidget", "Apply");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class AutoSettings.ToggleSetting
// (None)

class UClass* UToggleSetting::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ToggleSetting");

	return Clss;
}


// ToggleSetting AutoSettings.Default__ToggleSetting
// (Public, ClassDefaultObject, ArchetypeObject)

class UToggleSetting* UToggleSetting::GetDefaultObj()
{
	static class UToggleSetting* Default = nullptr;

	if (!Default)
		Default = static_cast<UToggleSetting*>(UToggleSetting::StaticClass()->DefaultObject);

	return Default;
}


// Function AutoSettings.ToggleSetting.UpdateToggleState
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// bool                               State                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UToggleSetting::UpdateToggleState(bool State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToggleSetting", "UpdateToggleState");

	Params::UToggleSetting_UpdateToggleState_Params Parms{};

	Parms.State = State;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AutoSettings.ToggleSetting.ToggleStateUpdated
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                               State                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UToggleSetting::ToggleStateUpdated(bool State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToggleSetting", "ToggleStateUpdated");

	Params::UToggleSetting_ToggleStateUpdated_Params Parms{};

	Parms.State = State;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AutoSettings.CheckBoxSetting
// (None)

class UClass* UCheckBoxSetting::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CheckBoxSetting");

	return Clss;
}


// CheckBoxSetting AutoSettings.Default__CheckBoxSetting
// (Public, ClassDefaultObject, ArchetypeObject)

class UCheckBoxSetting* UCheckBoxSetting::GetDefaultObj()
{
	static class UCheckBoxSetting* Default = nullptr;

	if (!Default)
		Default = static_cast<UCheckBoxSetting*>(UCheckBoxSetting::StaticClass()->DefaultObject);

	return Default;
}


// Function AutoSettings.CheckBoxSetting.CheckBoxStateChanged
// (Final, Native, Private)
// Parameters:
// bool                               IsChecked                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCheckBoxSetting::CheckBoxStateChanged(bool IsChecked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheckBoxSetting", "CheckBoxStateChanged");

	Params::UCheckBoxSetting_CheckBoxStateChanged_Params Parms{};

	Parms.IsChecked = IsChecked;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AutoSettings.SelectSetting
// (None)

class UClass* USelectSetting::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SelectSetting");

	return Clss;
}


// SelectSetting AutoSettings.Default__SelectSetting
// (Public, ClassDefaultObject, ArchetypeObject)

class USelectSetting* USelectSetting::GetDefaultObj()
{
	static class USelectSetting* Default = nullptr;

	if (!Default)
		Default = static_cast<USelectSetting*>(USelectSetting::StaticClass()->DefaultObject);

	return Default;
}


// Function AutoSettings.SelectSetting.UpdateOptions
// (Native, Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// TArray<struct FSettingOption>      InOptions                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void USelectSetting::UpdateOptions(TArray<struct FSettingOption>& InOptions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SelectSetting", "UpdateOptions");

	Params::USelectSetting_UpdateOptions_Params Parms{};

	Parms.InOptions = InOptions;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AutoSettings.SelectSetting.RegenerateOptions
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USelectSetting::RegenerateOptions()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SelectSetting", "RegenerateOptions");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class AutoSettings.ComboBoxSetting
// (None)

class UClass* UComboBoxSetting::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ComboBoxSetting");

	return Clss;
}


// ComboBoxSetting AutoSettings.Default__ComboBoxSetting
// (Public, ClassDefaultObject, ArchetypeObject)

class UComboBoxSetting* UComboBoxSetting::GetDefaultObj()
{
	static class UComboBoxSetting* Default = nullptr;

	if (!Default)
		Default = static_cast<UComboBoxSetting*>(UComboBoxSetting::StaticClass()->DefaultObject);

	return Default;
}


// Function AutoSettings.ComboBoxSetting.ComboBoxSelectionChanged
// (Final, Native, Private)
// Parameters:
// class FString                      SelectedItem                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESelectInfo             SelectionType                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UComboBoxSetting::ComboBoxSelectionChanged(const class FString& SelectedItem, enum class ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComboBoxSetting", "ComboBoxSelectionChanged");

	Params::UComboBoxSetting_ComboBoxSelectionChanged_Params Parms{};

	Parms.SelectedItem = SelectedItem;
	Parms.SelectionType = SelectionType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AutoSettings.ConsoleUtils
// (None)

class UClass* UConsoleUtils::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ConsoleUtils");

	return Clss;
}


// ConsoleUtils AutoSettings.Default__ConsoleUtils
// (Public, ClassDefaultObject, ArchetypeObject)

class UConsoleUtils* UConsoleUtils::GetDefaultObj()
{
	static class UConsoleUtils* Default = nullptr;

	if (!Default)
		Default = static_cast<UConsoleUtils*>(UConsoleUtils::StaticClass()->DefaultObject);

	return Default;
}


// Function AutoSettings.ConsoleUtils.SetStringCVar
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FName                        Name                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Value                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UConsoleUtils::SetStringCVar(class FName Name, const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConsoleUtils", "SetStringCVar");

	Params::UConsoleUtils_SetStringCVar_Params Parms{};

	Parms.Name = Name;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AutoSettings.ConsoleUtils.SetIntCVar
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FName                        Name                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UConsoleUtils::SetIntCVar(class FName Name, int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConsoleUtils", "SetIntCVar");

	Params::UConsoleUtils_SetIntCVar_Params Parms{};

	Parms.Name = Name;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AutoSettings.ConsoleUtils.SetFloatCVar
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FName                        Name                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UConsoleUtils::SetFloatCVar(class FName Name, float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConsoleUtils", "SetFloatCVar");

	Params::UConsoleUtils_SetFloatCVar_Params Parms{};

	Parms.Name = Name;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AutoSettings.ConsoleUtils.SetBoolCVar
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FName                        Name                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UConsoleUtils::SetBoolCVar(class FName Name, bool Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConsoleUtils", "SetBoolCVar");

	Params::UConsoleUtils_SetBoolCVar_Params Parms{};

	Parms.Name = Name;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AutoSettings.ConsoleUtils.IsCVarRegistered
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        Name                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UConsoleUtils::IsCVarRegistered(class FName Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConsoleUtils", "IsCVarRegistered");

	Params::UConsoleUtils_IsCVarRegistered_Params Parms{};

	Parms.Name = Name;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AutoSettings.ConsoleUtils.GetStringCVar
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        Name                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UConsoleUtils::GetStringCVar(class FName Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConsoleUtils", "GetStringCVar");

	Params::UConsoleUtils_GetStringCVar_Params Parms{};

	Parms.Name = Name;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AutoSettings.ConsoleUtils.GetIntCVar
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        Name                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UConsoleUtils::GetIntCVar(class FName Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConsoleUtils", "GetIntCVar");

	Params::UConsoleUtils_GetIntCVar_Params Parms{};

	Parms.Name = Name;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AutoSettings.ConsoleUtils.GetFloatCVar
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        Name                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UConsoleUtils::GetFloatCVar(class FName Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConsoleUtils", "GetFloatCVar");

	Params::UConsoleUtils_GetFloatCVar_Params Parms{};

	Parms.Name = Name;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AutoSettings.ConsoleUtils.GetBoolCVar
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        Name                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UConsoleUtils::GetBoolCVar(class FName Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConsoleUtils", "GetBoolCVar");

	Params::UConsoleUtils_GetBoolCVar_Params Parms{};

	Parms.Name = Name;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class AutoSettings.CVarChangeListener
// (None)

class UClass* UCVarChangeListener::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CVarChangeListener");

	return Clss;
}


// CVarChangeListener AutoSettings.Default__CVarChangeListener
// (Public, ClassDefaultObject, ArchetypeObject)

class UCVarChangeListener* UCVarChangeListener::GetDefaultObj()
{
	static class UCVarChangeListener* Default = nullptr;

	if (!Default)
		Default = static_cast<UCVarChangeListener*>(UCVarChangeListener::StaticClass()->DefaultObject);

	return Default;
}


// Class AutoSettings.CVarChangeListenerManager
// (None)

class UClass* UCVarChangeListenerManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CVarChangeListenerManager");

	return Clss;
}


// CVarChangeListenerManager AutoSettings.Default__CVarChangeListenerManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UCVarChangeListenerManager* UCVarChangeListenerManager::GetDefaultObj()
{
	static class UCVarChangeListenerManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UCVarChangeListenerManager*>(UCVarChangeListenerManager::StaticClass()->DefaultObject);

	return Default;
}


// Function AutoSettings.CVarChangeListenerManager.AddStringCVarCallbackStatic
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FName                        Name                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 ChangedCallback                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               CallbackImmediately                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCVarChangeListenerManager::AddStringCVarCallbackStatic(class FName Name, FDelegateProperty_ ChangedCallback, bool CallbackImmediately)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CVarChangeListenerManager", "AddStringCVarCallbackStatic");

	Params::UCVarChangeListenerManager_AddStringCVarCallbackStatic_Params Parms{};

	Parms.Name = Name;
	Parms.ChangedCallback = ChangedCallback;
	Parms.CallbackImmediately = CallbackImmediately;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AutoSettings.CVarChangeListenerManager.AddIntCVarCallbackStatic
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FName                        Name                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 ChangedCallback                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               CallbackImmediately                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCVarChangeListenerManager::AddIntCVarCallbackStatic(class FName Name, FDelegateProperty_ ChangedCallback, bool CallbackImmediately)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CVarChangeListenerManager", "AddIntCVarCallbackStatic");

	Params::UCVarChangeListenerManager_AddIntCVarCallbackStatic_Params Parms{};

	Parms.Name = Name;
	Parms.ChangedCallback = ChangedCallback;
	Parms.CallbackImmediately = CallbackImmediately;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AutoSettings.CVarChangeListenerManager.AddFloatCVarCallbackStatic
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FName                        Name                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 ChangedCallback                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               CallbackImmediately                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCVarChangeListenerManager::AddFloatCVarCallbackStatic(class FName Name, FDelegateProperty_ ChangedCallback, bool CallbackImmediately)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CVarChangeListenerManager", "AddFloatCVarCallbackStatic");

	Params::UCVarChangeListenerManager_AddFloatCVarCallbackStatic_Params Parms{};

	Parms.Name = Name;
	Parms.ChangedCallback = ChangedCallback;
	Parms.CallbackImmediately = CallbackImmediately;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AutoSettings.CVarChangeListenerManager.AddBoolCVarCallbackStatic
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FName                        Name                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 ChangedCallback                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               CallbackImmediately                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCVarChangeListenerManager::AddBoolCVarCallbackStatic(class FName Name, FDelegateProperty_ ChangedCallback, bool CallbackImmediately)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CVarChangeListenerManager", "AddBoolCVarCallbackStatic");

	Params::UCVarChangeListenerManager_AddBoolCVarCallbackStatic_Params Parms{};

	Parms.Name = Name;
	Parms.ChangedCallback = ChangedCallback;
	Parms.CallbackImmediately = CallbackImmediately;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AutoSettings.SliderSetting
// (None)

class UClass* USliderSetting::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SliderSetting");

	return Clss;
}


// SliderSetting AutoSettings.Default__SliderSetting
// (Public, ClassDefaultObject, ArchetypeObject)

class USliderSetting* USliderSetting::GetDefaultObj()
{
	static class USliderSetting* Default = nullptr;

	if (!Default)
		Default = static_cast<USliderSetting*>(USliderSetting::StaticClass()->DefaultObject);

	return Default;
}


// Function AutoSettings.SliderSetting.UpdateSliderValue
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// float                              NormalizedValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              RawValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USliderSetting::UpdateSliderValue(float NormalizedValue, float RawValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SliderSetting", "UpdateSliderValue");

	Params::USliderSetting_UpdateSliderValue_Params Parms{};

	Parms.NormalizedValue = NormalizedValue;
	Parms.RawValue = RawValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AutoSettings.SliderSetting.SliderValueUpdated
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// float                              NormalizedValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USliderSetting::SliderValueUpdated(float NormalizedValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SliderSetting", "SliderValueUpdated");

	Params::USliderSetting_SliderValueUpdated_Params Parms{};

	Parms.NormalizedValue = NormalizedValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AutoSettings.SliderSetting.ShouldSaveCurrentValue
// (Native, Event, Protected, BlueprintEvent, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USliderSetting::ShouldSaveCurrentValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SliderSetting", "ShouldSaveCurrentValue");

	Params::USliderSetting_ShouldSaveCurrentValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AutoSettings.SliderSetting.RawValueToNormalized
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              RawValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USliderSetting::RawValueToNormalized(float RawValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SliderSetting", "RawValueToNormalized");

	Params::USliderSetting_RawValueToNormalized_Params Parms{};

	Parms.RawValue = RawValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AutoSettings.SliderSetting.OnSliderValueUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              NormalizedValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              RawValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USliderSetting::OnSliderValueUpdated(float NormalizedValue, float RawValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SliderSetting", "OnSliderValueUpdated");

	Params::USliderSetting_OnSliderValueUpdated_Params Parms{};

	Parms.NormalizedValue = NormalizedValue;
	Parms.RawValue = RawValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AutoSettings.SliderSetting.NormalizedValueToRaw
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              NormalizedValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USliderSetting::NormalizedValueToRaw(float NormalizedValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SliderSetting", "NormalizedValueToRaw");

	Params::USliderSetting_NormalizedValueToRaw_Params Parms{};

	Parms.NormalizedValue = NormalizedValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AutoSettings.SliderSetting.ClampRawValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              RawValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USliderSetting::ClampRawValue(float RawValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SliderSetting", "ClampRawValue");

	Params::USliderSetting_ClampRawValue_Params Parms{};

	Parms.RawValue = RawValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class AutoSettings.NativeSliderSetting
// (None)

class UClass* UNativeSliderSetting::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NativeSliderSetting");

	return Clss;
}


// NativeSliderSetting AutoSettings.Default__NativeSliderSetting
// (Public, ClassDefaultObject, ArchetypeObject)

class UNativeSliderSetting* UNativeSliderSetting::GetDefaultObj()
{
	static class UNativeSliderSetting* Default = nullptr;

	if (!Default)
		Default = static_cast<UNativeSliderSetting*>(UNativeSliderSetting::StaticClass()->DefaultObject);

	return Default;
}


// Function AutoSettings.NativeSliderSetting.SliderValueChanged
// (Final, Native, Private)
// Parameters:
// float                              NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNativeSliderSetting::SliderValueChanged(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NativeSliderSetting", "SliderValueChanged");

	Params::UNativeSliderSetting_SliderValueChanged_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AutoSettings.NativeSliderSetting.SliderMouseCaptureEnd
// (Final, Native, Private)
// Parameters:

void UNativeSliderSetting::SliderMouseCaptureEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NativeSliderSetting", "SliderMouseCaptureEnd");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AutoSettings.NativeSliderSetting.SliderMouseCaptureBegin
// (Final, Native, Private)
// Parameters:

void UNativeSliderSetting::SliderMouseCaptureBegin()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NativeSliderSetting", "SliderMouseCaptureBegin");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class AutoSettings.RadioButton
// (None)

class UClass* URadioButton::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RadioButton");

	return Clss;
}


// RadioButton AutoSettings.Default__RadioButton
// (Public, ClassDefaultObject, ArchetypeObject)

class URadioButton* URadioButton::GetDefaultObj()
{
	static class URadioButton* Default = nullptr;

	if (!Default)
		Default = static_cast<URadioButton*>(URadioButton::StaticClass()->DefaultObject);

	return Default;
}


// Function AutoSettings.RadioButton.UpdateSelected
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               InSelected                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URadioButton::UpdateSelected(bool InSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadioButton", "UpdateSelected");

	Params::URadioButton_UpdateSelected_Params Parms{};

	Parms.InSelected = InSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AutoSettings.RadioButton.UpdateLabel
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        InLabel                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void URadioButton::UpdateLabel(class FText& InLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadioButton", "UpdateLabel");

	Params::URadioButton_UpdateLabel_Params Parms{};

	Parms.InLabel = InLabel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AutoSettings.RadioButton.TriggerSelection
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void URadioButton::TriggerSelection()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadioButton", "TriggerSelection");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AutoSettings.RadioButton.SetValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InValue                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URadioButton::SetValue(const class FString& InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadioButton", "SetValue");

	Params::URadioButton_SetValue_Params Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AutoSettings.RadioButton.SetSelected
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InSelected                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URadioButton::SetSelected(bool InSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadioButton", "SetSelected");

	Params::URadioButton_SetSelected_Params Parms{};

	Parms.InSelected = InSelected;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AutoSettings.RadioButton.SetLabel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FText                        InLabel                                                          (Parm, NativeAccessSpecifierPublic)

void URadioButton::SetLabel(class FText InLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadioButton", "SetLabel");

	Params::URadioButton_SetLabel_Params Parms{};

	Parms.InLabel = InLabel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AutoSettings.RadioButton.GetValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString URadioButton::GetValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadioButton", "GetValue");

	Params::URadioButton_GetValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AutoSettings.RadioButton.GetSelected
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URadioButton::GetSelected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadioButton", "GetSelected");

	Params::URadioButton_GetSelected_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AutoSettings.RadioButton.GetLabel
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText URadioButton::GetLabel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadioButton", "GetLabel");

	Params::URadioButton_GetLabel_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class AutoSettings.RadioSelect
// (None)

class UClass* URadioSelect::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RadioSelect");

	return Clss;
}


// RadioSelect AutoSettings.Default__RadioSelect
// (Public, ClassDefaultObject, ArchetypeObject)

class URadioSelect* URadioSelect::GetDefaultObj()
{
	static class URadioSelect* Default = nullptr;

	if (!Default)
		Default = static_cast<URadioSelect*>(URadioSelect::StaticClass()->DefaultObject);

	return Default;
}


// Function AutoSettings.RadioSelect.SetOptions
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FSettingOption>      InOptions                                                        (Parm, ZeroConstructor, NativeAccessSpecifierPublic)

void URadioSelect::SetOptions(const TArray<struct FSettingOption>& InOptions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadioSelect", "SetOptions");

	Params::URadioSelect_SetOptions_Params Parms{};

	Parms.InOptions = InOptions;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AutoSettings.RadioSelect.Select
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Value                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URadioSelect::Select(const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadioSelect", "Select");

	Params::URadioSelect_Select_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AutoSettings.RadioSelect.OnButtonCreated
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// class URadioButton*                Button                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPanelSlot*                  NewSlot                                                          (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URadioSelect::OnButtonCreated(class URadioButton* Button, class UPanelSlot* NewSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadioSelect", "OnButtonCreated");

	Params::URadioSelect_OnButtonCreated_Params Parms{};

	Parms.Button = Button;
	Parms.NewSlot = NewSlot;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AutoSettings.RadioSelect.GetRadioButtonWidgets
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class URadioButton*>        ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

TArray<class URadioButton*> URadioSelect::GetRadioButtonWidgets()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadioSelect", "GetRadioButtonWidgets");

	Params::URadioSelect_GetRadioButtonWidgets_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AutoSettings.RadioSelect.GetOptions
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FSettingOption>      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FSettingOption> URadioSelect::GetOptions()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadioSelect", "GetOptions");

	Params::URadioSelect_GetOptions_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AutoSettings.RadioSelect.ButtonSelected
// (Final, Native, Private)
// Parameters:
// class FString                      Value                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URadioSelect::ButtonSelected(const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadioSelect", "ButtonSelected");

	Params::URadioSelect_ButtonSelected_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AutoSettings.RadioSelectSetting
// (None)

class UClass* URadioSelectSetting::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RadioSelectSetting");

	return Clss;
}


// RadioSelectSetting AutoSettings.Default__RadioSelectSetting
// (Public, ClassDefaultObject, ArchetypeObject)

class URadioSelectSetting* URadioSelectSetting::GetDefaultObj()
{
	static class URadioSelectSetting* Default = nullptr;

	if (!Default)
		Default = static_cast<URadioSelectSetting*>(URadioSelectSetting::StaticClass()->DefaultObject);

	return Default;
}


// Function AutoSettings.RadioSelectSetting.RadioSelectionChanged
// (Final, Native, Private)
// Parameters:
// class FString                      Value                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URadioSelectSetting::RadioSelectionChanged(const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadioSelectSetting", "RadioSelectionChanged");

	Params::URadioSelectSetting_RadioSelectionChanged_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AutoSettings.SettingOptionFactory
// (None)

class UClass* USettingOptionFactory::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SettingOptionFactory");

	return Clss;
}


// SettingOptionFactory AutoSettings.Default__SettingOptionFactory
// (Public, ClassDefaultObject, ArchetypeObject)

class USettingOptionFactory* USettingOptionFactory::GetDefaultObj()
{
	static class USettingOptionFactory* Default = nullptr;

	if (!Default)
		Default = static_cast<USettingOptionFactory*>(USettingOptionFactory::StaticClass()->DefaultObject);

	return Default;
}


// Function AutoSettings.SettingOptionFactory.ConstructOptions
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<struct FSettingOption>      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FSettingOption> USettingOptionFactory::ConstructOptions()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SettingOptionFactory", "ConstructOptions");

	Params::USettingOptionFactory_ConstructOptions_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class AutoSettings.ResolutionOptionFactory
// (None)

class UClass* UResolutionOptionFactory::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ResolutionOptionFactory");

	return Clss;
}


// ResolutionOptionFactory AutoSettings.Default__ResolutionOptionFactory
// (Public, ClassDefaultObject, ArchetypeObject)

class UResolutionOptionFactory* UResolutionOptionFactory::GetDefaultObj()
{
	static class UResolutionOptionFactory* Default = nullptr;

	if (!Default)
		Default = static_cast<UResolutionOptionFactory*>(UResolutionOptionFactory::StaticClass()->DefaultObject);

	return Default;
}


// Class AutoSettings.ResolutionStringUtils
// (None)

class UClass* UResolutionStringUtils::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ResolutionStringUtils");

	return Clss;
}


// ResolutionStringUtils AutoSettings.Default__ResolutionStringUtils
// (Public, ClassDefaultObject, ArchetypeObject)

class UResolutionStringUtils* UResolutionStringUtils::GetDefaultObj()
{
	static class UResolutionStringUtils* Default = nullptr;

	if (!Default)
		Default = static_cast<UResolutionStringUtils*>(UResolutionStringUtils::StaticClass()->DefaultObject);

	return Default;
}


// Class AutoSettings.SettingValueMask
// (None)

class UClass* USettingValueMask::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SettingValueMask");

	return Clss;
}


// SettingValueMask AutoSettings.Default__SettingValueMask
// (Public, ClassDefaultObject, ArchetypeObject)

class USettingValueMask* USettingValueMask::GetDefaultObj()
{
	static class USettingValueMask* Default = nullptr;

	if (!Default)
		Default = static_cast<USettingValueMask*>(USettingValueMask::StaticClass()->DefaultObject);

	return Default;
}


// Function AutoSettings.SettingValueMask.RecombineValues
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class FString                      SettingValue                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ConsoleValue                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString USettingValueMask::RecombineValues(const class FString& SettingValue, const class FString& ConsoleValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SettingValueMask", "RecombineValues");

	Params::USettingValueMask_RecombineValues_Params Parms{};

	Parms.SettingValue = SettingValue;
	Parms.ConsoleValue = ConsoleValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AutoSettings.SettingValueMask.MaskValue
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class FString                      ConsoleValue                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString USettingValueMask::MaskValue(const class FString& ConsoleValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SettingValueMask", "MaskValue");

	Params::USettingValueMask_MaskValue_Params Parms{};

	Parms.ConsoleValue = ConsoleValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class AutoSettings.ResolutionValueMask
// (None)

class UClass* UResolutionValueMask::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ResolutionValueMask");

	return Clss;
}


// ResolutionValueMask AutoSettings.Default__ResolutionValueMask
// (Public, ClassDefaultObject, ArchetypeObject)

class UResolutionValueMask* UResolutionValueMask::GetDefaultObj()
{
	static class UResolutionValueMask* Default = nullptr;

	if (!Default)
		Default = static_cast<UResolutionValueMask*>(UResolutionValueMask::StaticClass()->DefaultObject);

	return Default;
}


// Class AutoSettings.SettingContainerUtils
// (None)

class UClass* USettingContainerUtils::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SettingContainerUtils");

	return Clss;
}


// SettingContainerUtils AutoSettings.Default__SettingContainerUtils
// (Public, ClassDefaultObject, ArchetypeObject)

class USettingContainerUtils* USettingContainerUtils::GetDefaultObj()
{
	static class USettingContainerUtils* Default = nullptr;

	if (!Default)
		Default = static_cast<USettingContainerUtils*>(USettingContainerUtils::StaticClass()->DefaultObject);

	return Default;
}


// Function AutoSettings.SettingContainerUtils.SaveChildSettings
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUserWidget*                 UserWidget                                                       (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                     Parent                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USettingContainerUtils::SaveChildSettings(class UUserWidget* UserWidget, class UWidget* Parent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SettingContainerUtils", "SaveChildSettings");

	Params::USettingContainerUtils_SaveChildSettings_Params Parms{};

	Parms.UserWidget = UserWidget;
	Parms.Parent = Parent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AutoSettings.SettingContainerUtils.GetChildSettings
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UUserWidget*                 UserWidget                                                       (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                     Parent                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UAutoSettingWidget*>  ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

TArray<class UAutoSettingWidget*> USettingContainerUtils::GetChildSettings(class UUserWidget* UserWidget, class UWidget* Parent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SettingContainerUtils", "GetChildSettings");

	Params::USettingContainerUtils_GetChildSettings_Params Parms{};

	Parms.UserWidget = UserWidget;
	Parms.Parent = Parent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AutoSettings.SettingContainerUtils.DoesAnyChildSettingHaveUnsavedChange
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UUserWidget*                 UserWidget                                                       (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                     Parent                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USettingContainerUtils::DoesAnyChildSettingHaveUnsavedChange(class UUserWidget* UserWidget, class UWidget* Parent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SettingContainerUtils", "DoesAnyChildSettingHaveUnsavedChange");

	Params::USettingContainerUtils_DoesAnyChildSettingHaveUnsavedChange_Params Parms{};

	Parms.UserWidget = UserWidget;
	Parms.Parent = Parent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AutoSettings.SettingContainerUtils.DoesAnyChildSettingHaveUnappliedChange
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UUserWidget*                 UserWidget                                                       (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                     Parent                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USettingContainerUtils::DoesAnyChildSettingHaveUnappliedChange(class UUserWidget* UserWidget, class UWidget* Parent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SettingContainerUtils", "DoesAnyChildSettingHaveUnappliedChange");

	Params::USettingContainerUtils_DoesAnyChildSettingHaveUnappliedChange_Params Parms{};

	Parms.UserWidget = UserWidget;
	Parms.Parent = Parent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AutoSettings.SettingContainerUtils.CancelChildSettings
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUserWidget*                 UserWidget                                                       (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                     Parent                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USettingContainerUtils::CancelChildSettings(class UUserWidget* UserWidget, class UWidget* Parent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SettingContainerUtils", "CancelChildSettings");

	Params::USettingContainerUtils_CancelChildSettings_Params Parms{};

	Parms.UserWidget = UserWidget;
	Parms.Parent = Parent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AutoSettings.SettingContainerUtils.ApplyChildSettings
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUserWidget*                 UserWidget                                                       (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                     Parent                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USettingContainerUtils::ApplyChildSettings(class UUserWidget* UserWidget, class UWidget* Parent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SettingContainerUtils", "ApplyChildSettings");

	Params::USettingContainerUtils_ApplyChildSettings_Params Parms{};

	Parms.UserWidget = UserWidget;
	Parms.Parent = Parent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AutoSettings.SettingsManager
// (None)

class UClass* USettingsManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SettingsManager");

	return Clss;
}


// SettingsManager AutoSettings.Default__SettingsManager
// (Public, ClassDefaultObject, ArchetypeObject)

class USettingsManager* USettingsManager::GetDefaultObj()
{
	static class USettingsManager* Default = nullptr;

	if (!Default)
		Default = static_cast<USettingsManager*>(USettingsManager::StaticClass()->DefaultObject);

	return Default;
}


// Function AutoSettings.SettingsManager.SaveSettingStatic
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FAutoSettingData            SettingData                                                      (Parm, NativeAccessSpecifierPublic)

void USettingsManager::SaveSettingStatic(const struct FAutoSettingData& SettingData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SettingsManager", "SaveSettingStatic");

	Params::USettingsManager_SaveSettingStatic_Params Parms{};

	Parms.SettingData = SettingData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AutoSettings.SettingsManager.RegisterStringCVarSettingWithCallback
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FName                        Name                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      DefaultValue                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Help                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 ChangedCallback                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               CallbackImmediately                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USettingsManager::RegisterStringCVarSettingWithCallback(class FName Name, const class FString& DefaultValue, const class FString& Help, FDelegateProperty_ ChangedCallback, bool CallbackImmediately)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SettingsManager", "RegisterStringCVarSettingWithCallback");

	Params::USettingsManager_RegisterStringCVarSettingWithCallback_Params Parms{};

	Parms.Name = Name;
	Parms.DefaultValue = DefaultValue;
	Parms.Help = Help;
	Parms.ChangedCallback = ChangedCallback;
	Parms.CallbackImmediately = CallbackImmediately;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AutoSettings.SettingsManager.RegisterStringCVarSetting
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FName                        Name                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      DefaultValue                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Help                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USettingsManager::RegisterStringCVarSetting(class FName Name, const class FString& DefaultValue, const class FString& Help)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SettingsManager", "RegisterStringCVarSetting");

	Params::USettingsManager_RegisterStringCVarSetting_Params Parms{};

	Parms.Name = Name;
	Parms.DefaultValue = DefaultValue;
	Parms.Help = Help;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AutoSettings.SettingsManager.RegisterIntCVarSettingWithCallback
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FName                        Name                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              DefaultValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Help                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 ChangedCallback                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               CallbackImmediately                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USettingsManager::RegisterIntCVarSettingWithCallback(class FName Name, int32 DefaultValue, const class FString& Help, FDelegateProperty_ ChangedCallback, bool CallbackImmediately)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SettingsManager", "RegisterIntCVarSettingWithCallback");

	Params::USettingsManager_RegisterIntCVarSettingWithCallback_Params Parms{};

	Parms.Name = Name;
	Parms.DefaultValue = DefaultValue;
	Parms.Help = Help;
	Parms.ChangedCallback = ChangedCallback;
	Parms.CallbackImmediately = CallbackImmediately;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AutoSettings.SettingsManager.RegisterIntCVarSetting
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FName                        Name                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              DefaultValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Help                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USettingsManager::RegisterIntCVarSetting(class FName Name, int32 DefaultValue, const class FString& Help)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SettingsManager", "RegisterIntCVarSetting");

	Params::USettingsManager_RegisterIntCVarSetting_Params Parms{};

	Parms.Name = Name;
	Parms.DefaultValue = DefaultValue;
	Parms.Help = Help;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AutoSettings.SettingsManager.RegisterFloatCVarSettingWithCallback
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FName                        Name                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DefaultValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Help                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 ChangedCallback                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               CallbackImmediately                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USettingsManager::RegisterFloatCVarSettingWithCallback(class FName Name, float DefaultValue, const class FString& Help, FDelegateProperty_ ChangedCallback, bool CallbackImmediately)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SettingsManager", "RegisterFloatCVarSettingWithCallback");

	Params::USettingsManager_RegisterFloatCVarSettingWithCallback_Params Parms{};

	Parms.Name = Name;
	Parms.DefaultValue = DefaultValue;
	Parms.Help = Help;
	Parms.ChangedCallback = ChangedCallback;
	Parms.CallbackImmediately = CallbackImmediately;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AutoSettings.SettingsManager.RegisterFloatCVarSetting
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FName                        Name                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DefaultValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Help                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USettingsManager::RegisterFloatCVarSetting(class FName Name, float DefaultValue, const class FString& Help)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SettingsManager", "RegisterFloatCVarSetting");

	Params::USettingsManager_RegisterFloatCVarSetting_Params Parms{};

	Parms.Name = Name;
	Parms.DefaultValue = DefaultValue;
	Parms.Help = Help;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AutoSettings.SettingsManager.RegisterBoolCVarSettingWithCallback
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FName                        Name                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               DefaultValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Help                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 ChangedCallback                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               CallbackImmediately                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USettingsManager::RegisterBoolCVarSettingWithCallback(class FName Name, bool DefaultValue, const class FString& Help, FDelegateProperty_ ChangedCallback, bool CallbackImmediately)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SettingsManager", "RegisterBoolCVarSettingWithCallback");

	Params::USettingsManager_RegisterBoolCVarSettingWithCallback_Params Parms{};

	Parms.Name = Name;
	Parms.DefaultValue = DefaultValue;
	Parms.Help = Help;
	Parms.ChangedCallback = ChangedCallback;
	Parms.CallbackImmediately = CallbackImmediately;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AutoSettings.SettingsManager.RegisterBoolCVarSetting
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FName                        Name                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               DefaultValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Help                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USettingsManager::RegisterBoolCVarSetting(class FName Name, bool DefaultValue, const class FString& Help)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SettingsManager", "RegisterBoolCVarSetting");

	Params::USettingsManager_RegisterBoolCVarSetting_Params Parms{};

	Parms.Name = Name;
	Parms.DefaultValue = DefaultValue;
	Parms.Help = Help;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AutoSettings.SettingsManager.GetValue
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        Key                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bPreferConfigValue                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString USettingsManager::GetValue(class FName Key, bool bPreferConfigValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SettingsManager", "GetValue");

	Params::USettingsManager_GetValue_Params Parms{};

	Parms.Key = Key;
	Parms.bPreferConfigValue = bPreferConfigValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AutoSettings.SettingsManager.AutoDetectSettingsStatic
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              WorkScale                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              CPUMultiplier                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              GPUMultiplier                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USettingsManager::AutoDetectSettingsStatic(int32 WorkScale, float CPUMultiplier, float GPUMultiplier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SettingsManager", "AutoDetectSettingsStatic");

	Params::USettingsManager_AutoDetectSettingsStatic_Params Parms{};

	Parms.WorkScale = WorkScale;
	Parms.CPUMultiplier = CPUMultiplier;
	Parms.GPUMultiplier = GPUMultiplier;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AutoSettings.SettingsManager.ApplySettingStatic
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FAutoSettingData            SettingData                                                      (Parm, NativeAccessSpecifierPublic)

void USettingsManager::ApplySettingStatic(const struct FAutoSettingData& SettingData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SettingsManager", "ApplySettingStatic");

	Params::USettingsManager_ApplySettingStatic_Params Parms{};

	Parms.SettingData = SettingData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AutoSettings.Spinner
// (None)

class UClass* USpinner::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Spinner");

	return Clss;
}


// Spinner AutoSettings.Default__Spinner
// (Public, ClassDefaultObject, ArchetypeObject)

class USpinner* USpinner::GetDefaultObj()
{
	static class USpinner* Default = nullptr;

	if (!Default)
		Default = static_cast<USpinner*>(USpinner::StaticClass()->DefaultObject);

	return Default;
}


// Function AutoSettings.Spinner.SelectValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Value                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpinner::SelectValue(const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Spinner", "SelectValue");

	Params::USpinner_SelectValue_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AutoSettings.Spinner.SelectIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpinner::SelectIndex(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Spinner", "SelectIndex");

	Params::USpinner_SelectIndex_Params Parms{};

	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AutoSettings.Spinner.Previous
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USpinner::Previous()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Spinner", "Previous");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AutoSettings.Spinner.OnSelectionChanged
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// struct FSettingOption              SelectedOption                                                   (Parm, NativeAccessSpecifierPublic)

void USpinner::OnSelectionChanged(const struct FSettingOption& SelectedOption)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Spinner", "OnSelectionChanged");

	Params::USpinner_OnSelectionChanged_Params Parms{};

	Parms.SelectedOption = SelectedOption;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AutoSettings.Spinner.Next
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USpinner::Next()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Spinner", "Next");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AutoSettings.Spinner.HasValidPrevious
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USpinner::HasValidPrevious()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Spinner", "HasValidPrevious");

	Params::USpinner_HasValidPrevious_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AutoSettings.Spinner.HasValidNext
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USpinner::HasValidNext()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Spinner", "HasValidNext");

	Params::USpinner_HasValidNext_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AutoSettings.Spinner.GetCurrentOption
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSettingOption              ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FSettingOption USpinner::GetCurrentOption()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Spinner", "GetCurrentOption");

	Params::USpinner_GetCurrentOption_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AutoSettings.Spinner.GetCurrentIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 USpinner::GetCurrentIndex()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Spinner", "GetCurrentIndex");

	Params::USpinner_GetCurrentIndex_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class AutoSettings.SpinnerSetting
// (None)

class UClass* USpinnerSetting::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpinnerSetting");

	return Clss;
}


// SpinnerSetting AutoSettings.Default__SpinnerSetting
// (Public, ClassDefaultObject, ArchetypeObject)

class USpinnerSetting* USpinnerSetting::GetDefaultObj()
{
	static class USpinnerSetting* Default = nullptr;

	if (!Default)
		Default = static_cast<USpinnerSetting*>(USpinnerSetting::StaticClass()->DefaultObject);

	return Default;
}


// Function AutoSettings.SpinnerSetting.SpinnerSelectionChanged
// (Final, Native, Private)
// Parameters:
// class FString                      Value                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpinnerSetting::SpinnerSelectionChanged(const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpinnerSetting", "SpinnerSelectionChanged");

	Params::USpinnerSetting_SpinnerSelectionChanged_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AutoSettings.WindowModeValueMask
// (None)

class UClass* UWindowModeValueMask::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WindowModeValueMask");

	return Clss;
}


// WindowModeValueMask AutoSettings.Default__WindowModeValueMask
// (Public, ClassDefaultObject, ArchetypeObject)

class UWindowModeValueMask* UWindowModeValueMask::GetDefaultObj()
{
	static class UWindowModeValueMask* Default = nullptr;

	if (!Default)
		Default = static_cast<UWindowModeValueMask*>(UWindowModeValueMask::StaticClass()->DefaultObject);

	return Default;
}

}



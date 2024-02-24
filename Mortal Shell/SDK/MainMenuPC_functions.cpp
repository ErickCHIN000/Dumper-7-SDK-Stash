#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MainMenuPC.MainMenuPC_C
// (Actor, PlayerController)

class UClass* AMainMenuPC_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MainMenuPC_C");

	return Clss;
}


// MainMenuPC_C MainMenuPC.Default__MainMenuPC_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AMainMenuPC_C* AMainMenuPC_C::GetDefaultObj()
{
	static class AMainMenuPC_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AMainMenuPC_C*>(AMainMenuPC_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MainMenuPC.MainMenuPC_C.PCLoadingScreen_GetItemsDiscovered
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                ItemsDiscovered                                                  (Parm, OutParm, HasGetValueTypeHash)
// bool                               Empty                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AMainMenuPC_C::PCLoadingScreen_GetItemsDiscovered(TArray<class FName>* ItemsDiscovered, bool* Empty)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenuPC_C", "PCLoadingScreen_GetItemsDiscovered");

	Params::AMainMenuPC_C_PCLoadingScreen_GetItemsDiscovered_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ItemsDiscovered != nullptr)
		*ItemsDiscovered = std::move(Parms.ItemsDiscovered);

	if (Empty != nullptr)
		*Empty = Parms.Empty;

}


// Function MainMenuPC.MainMenuPC_C.PCLoadingScreen_GetLoadingScreenInfo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryItem              InventoryItem                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// int32                              LocalFamiliarity                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      ItemEffectDescription                                            (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void AMainMenuPC_C::PCLoadingScreen_GetLoadingScreenInfo(const struct FInventoryItem& InventoryItem, int32* LocalFamiliarity, class FString* ItemEffectDescription)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenuPC_C", "PCLoadingScreen_GetLoadingScreenInfo");

	Params::AMainMenuPC_C_PCLoadingScreen_GetLoadingScreenInfo_Params Parms{};

	Parms.InventoryItem = InventoryItem;

	UObject::ProcessEvent(Func, &Parms);

	if (LocalFamiliarity != nullptr)
		*LocalFamiliarity = Parms.LocalFamiliarity;

	if (ItemEffectDescription != nullptr)
		*ItemEffectDescription = std::move(Parms.ItemEffectDescription);

}


// Function MainMenuPC.MainMenuPC_C.UpdateCameraModifierMotionBlur
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMainMenuPC_C::UpdateCameraModifierMotionBlur(class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenuPC_C", "UpdateCameraModifierMotionBlur");

	Params::AMainMenuPC_C_UpdateCameraModifierMotionBlur_Params Parms{};

	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuPC.MainMenuPC_C.AddCameraModifierMotionBlur
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCameraModifier*             CallFunc_AddNewCameraModifier_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCameraModifier_MotionBlur_C*K2Node_DynamicCast_AsCamera_Modifier_Motion_Blur                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AMainMenuPC_C::AddCameraModifierMotionBlur(class UCameraModifier* CallFunc_AddNewCameraModifier_ReturnValue, class UCameraModifier_MotionBlur_C* K2Node_DynamicCast_AsCamera_Modifier_Motion_Blur, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenuPC_C", "AddCameraModifierMotionBlur");

	Params::AMainMenuPC_C_AddCameraModifierMotionBlur_Params Parms{};

	Parms.CallFunc_AddNewCameraModifier_ReturnValue = CallFunc_AddNewCameraModifier_ReturnValue;
	Parms.K2Node_DynamicCast_AsCamera_Modifier_Motion_Blur = K2Node_DynamicCast_AsCamera_Modifier_Motion_Blur;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuPC.MainMenuPC_C.AddCameraModifierBrightness
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCameraModifier*             CallFunc_AddNewCameraModifier_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCameraModifier_Brightness_C*K2Node_DynamicCast_AsCamera_Modifier_Brightness                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AMainMenuPC_C::AddCameraModifierBrightness(class UCameraModifier* CallFunc_AddNewCameraModifier_ReturnValue, class UCameraModifier_Brightness_C* K2Node_DynamicCast_AsCamera_Modifier_Brightness, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenuPC_C", "AddCameraModifierBrightness");

	Params::AMainMenuPC_C_AddCameraModifierBrightness_Params Parms{};

	Parms.CallFunc_AddNewCameraModifier_ReturnValue = CallFunc_AddNewCameraModifier_ReturnValue;
	Parms.K2Node_DynamicCast_AsCamera_Modifier_Brightness = K2Node_DynamicCast_AsCamera_Modifier_Brightness;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuPC.MainMenuPC_C.AddCameraModifierFilmGrain
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCameraModifier*             CallFunc_AddNewCameraModifier_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCameraModifier_FilmGrain_C* K2Node_DynamicCast_AsCamera_Modifier_Film_Grain                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AMainMenuPC_C::AddCameraModifierFilmGrain(class UCameraModifier* CallFunc_AddNewCameraModifier_ReturnValue, class UCameraModifier_FilmGrain_C* K2Node_DynamicCast_AsCamera_Modifier_Film_Grain, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenuPC_C", "AddCameraModifierFilmGrain");

	Params::AMainMenuPC_C_AddCameraModifierFilmGrain_Params Parms{};

	Parms.CallFunc_AddNewCameraModifier_ReturnValue = CallFunc_AddNewCameraModifier_ReturnValue;
	Parms.K2Node_DynamicCast_AsCamera_Modifier_Film_Grain = K2Node_DynamicCast_AsCamera_Modifier_Film_Grain;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuPC.MainMenuPC_C.AddCameraModifierPixelMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCameraModifier*             CallFunc_AddNewCameraModifier_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMainMenuPC_C::AddCameraModifierPixelMode(class UCameraModifier* CallFunc_AddNewCameraModifier_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenuPC_C", "AddCameraModifierPixelMode");

	Params::AMainMenuPC_C_AddCameraModifierPixelMode_Params Parms{};

	Parms.CallFunc_AddNewCameraModifier_ReturnValue = CallFunc_AddNewCameraModifier_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuPC.MainMenuPC_C.UpdateCameraModifierFilmGrain
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMainMenuPC_C::UpdateCameraModifierFilmGrain(class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenuPC_C", "UpdateCameraModifierFilmGrain");

	Params::AMainMenuPC_C_UpdateCameraModifierFilmGrain_Params Parms{};

	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuPC.MainMenuPC_C.UpdateCameraModifierPixelMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMainMenuPC_C::UpdateCameraModifierPixelMode(class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenuPC_C", "UpdateCameraModifierPixelMode");

	Params::AMainMenuPC_C_UpdateCameraModifierPixelMode_Params Parms{};

	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuPC.MainMenuPC_C.UpdateCameraModifierBrightness
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMainMenuPC_C::UpdateCameraModifierBrightness(class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenuPC_C", "UpdateCameraModifierBrightness");

	Params::AMainMenuPC_C_UpdateCameraModifierBrightness_Params Parms{};

	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuPC.MainMenuPC_C.CameraModifier_UpdateFOV
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AMainMenuPC_C::CameraModifier_UpdateFOV()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenuPC_C", "CameraModifier_UpdateFOV");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuPC.MainMenuPC_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AMainMenuPC_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenuPC_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuPC.MainMenuPC_C.CameraModifier_UpdateBrightness
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AMainMenuPC_C::CameraModifier_UpdateBrightness()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenuPC_C", "CameraModifier_UpdateBrightness");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuPC.MainMenuPC_C.CameraModifier_UpdateFilmGrain
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AMainMenuPC_C::CameraModifier_UpdateFilmGrain()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenuPC_C", "CameraModifier_UpdateFilmGrain");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuPC.MainMenuPC_C.CameraModifier_UpdatePixelMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AMainMenuPC_C::CameraModifier_UpdatePixelMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenuPC_C", "CameraModifier_UpdatePixelMode");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuPC.MainMenuPC_C.CameraModifier_UpdateMotionBlur
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AMainMenuPC_C::CameraModifier_UpdateMotionBlur()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenuPC_C", "CameraModifier_UpdateMotionBlur");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuPC.MainMenuPC_C.ExecuteUbergraph_MainMenuPC
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMainMenuPC_C::ExecuteUbergraph_MainMenuPC(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenuPC_C", "ExecuteUbergraph_MainMenuPC");

	Params::AMainMenuPC_C_ExecuteUbergraph_MainMenuPC_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuPC.MainMenuPC_C.InputTypeChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_UI_InputType       Input                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMainMenuPC_C::InputTypeChanged__DelegateSignature(enum class Enum_UI_InputType Input)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenuPC_C", "InputTypeChanged__DelegateSignature");

	Params::AMainMenuPC_C_InputTypeChanged__DelegateSignature_Params Parms{};

	Parms.Input = Input;

	UObject::ProcessEvent(Func, &Parms);

}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ArsenalAttachedHUDComponent.ArsenalAttachedHUDComponent_C
// (None)

class UClass* UArsenalAttachedHUDComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ArsenalAttachedHUDComponent_C");

	return Clss;
}


// ArsenalAttachedHUDComponent_C ArsenalAttachedHUDComponent.Default__ArsenalAttachedHUDComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UArsenalAttachedHUDComponent_C* UArsenalAttachedHUDComponent_C::GetDefaultObj()
{
	static class UArsenalAttachedHUDComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UArsenalAttachedHUDComponent_C*>(UArsenalAttachedHUDComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ArsenalAttachedHUDComponent.ArsenalAttachedHUDComponent_C.UpdateChangeWeaponHUD
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 UI                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseCharacter_C*            OwnerCharacter                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArsenalAttachedHUDComponent_C::UpdateChangeWeaponHUD(class UUserWidget* UI, class ABaseCharacter_C* OwnerCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalAttachedHUDComponent_C", "UpdateChangeWeaponHUD");

	Params::UArsenalAttachedHUDComponent_C_UpdateChangeWeaponHUD_Params Parms{};

	Parms.UI = UI;
	Parms.OwnerCharacter = OwnerCharacter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalAttachedHUDComponent.ArsenalAttachedHUDComponent_C.UpdateReloadHUD
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 UI                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseCharacter_C*            OwnerCharacter                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsReload                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

void UArsenalAttachedHUDComponent_C::UpdateReloadHUD(class UUserWidget* UI, class ABaseCharacter_C* OwnerCharacter, bool IsReload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalAttachedHUDComponent_C", "UpdateReloadHUD");

	Params::UArsenalAttachedHUDComponent_C_UpdateReloadHUD_Params Parms{};

	Parms.UI = UI;
	Parms.OwnerCharacter = OwnerCharacter;
	Parms.IsReload = IsReload;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalAttachedHUDComponent.ArsenalAttachedHUDComponent_C.UpdateRightWeaponHUD
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 UI                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseCharacter_C*            OwnerCharacter                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArsenalAttachedHUDComponent_C::UpdateRightWeaponHUD(class UUserWidget* UI, class ABaseCharacter_C* OwnerCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalAttachedHUDComponent_C", "UpdateRightWeaponHUD");

	Params::UArsenalAttachedHUDComponent_C_UpdateRightWeaponHUD_Params Parms{};

	Parms.UI = UI;
	Parms.OwnerCharacter = OwnerCharacter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalAttachedHUDComponent.ArsenalAttachedHUDComponent_C.UpdateLeftWeaponHUD
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 UI                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseCharacter_C*            OwnerCharacter                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArsenalAttachedHUDComponent_C::UpdateLeftWeaponHUD(class UUserWidget* UI, class ABaseCharacter_C* OwnerCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalAttachedHUDComponent_C", "UpdateLeftWeaponHUD");

	Params::UArsenalAttachedHUDComponent_C_UpdateLeftWeaponHUD_Params Parms{};

	Parms.UI = UI;
	Parms.OwnerCharacter = OwnerCharacter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalAttachedHUDComponent.ArsenalAttachedHUDComponent_C.UpdateFemtoHUD
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 UI                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseCharacter_C*            OwnerCharacter                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArsenalAttachedHUDComponent_C::UpdateFemtoHUD(class UUserWidget* UI, class ABaseCharacter_C* OwnerCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalAttachedHUDComponent_C", "UpdateFemtoHUD");

	Params::UArsenalAttachedHUDComponent_C_UpdateFemtoHUD_Params Parms{};

	Parms.UI = UI;
	Parms.OwnerCharacter = OwnerCharacter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalAttachedHUDComponent.ArsenalAttachedHUDComponent_C.UpdateTMPHUD
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 UI                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseCharacter_C*            OwnerCharacter                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArsenalAttachedHUDComponent_C::UpdateTMPHUD(class UUserWidget* UI, class ABaseCharacter_C* OwnerCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalAttachedHUDComponent_C", "UpdateTMPHUD");

	Params::UArsenalAttachedHUDComponent_C_UpdateTMPHUD_Params Parms{};

	Parms.UI = UI;
	Parms.OwnerCharacter = OwnerCharacter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalAttachedHUDComponent.ArsenalAttachedHUDComponent_C.UpdateHPHUD
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 UI                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseCharacter_C*            OwnerCharacter                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArsenalAttachedHUDComponent_C::UpdateHPHUD(class UUserWidget* UI, class ABaseCharacter_C* OwnerCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalAttachedHUDComponent_C", "UpdateHPHUD");

	Params::UArsenalAttachedHUDComponent_C_UpdateHPHUD_Params Parms{};

	Parms.UI = UI;
	Parms.OwnerCharacter = OwnerCharacter;

	UObject::ProcessEvent(Func, &Parms);

}

}



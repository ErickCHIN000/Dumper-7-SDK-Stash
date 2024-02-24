#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_WidgetInventoryEntryFilterStructureConstraints.BP_WidgetInventoryEntryFilterStructureConstraints_C
// (None)

class UClass* UBP_WidgetInventoryEntryFilterStructureConstraints_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_WidgetInventoryEntryFilterStructureConstraints_C");

	return Clss;
}


// BP_WidgetInventoryEntryFilterStructureConstraints_C BP_WidgetInventoryEntryFilterStructureConstraints.Default__BP_WidgetInventoryEntryFilterStructureConstraints_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_WidgetInventoryEntryFilterStructureConstraints_C* UBP_WidgetInventoryEntryFilterStructureConstraints_C::GetDefaultObj()
{
	static class UBP_WidgetInventoryEntryFilterStructureConstraints_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_WidgetInventoryEntryFilterStructureConstraints_C*>(UBP_WidgetInventoryEntryFilterStructureConstraints_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_WidgetInventoryEntryFilterStructureConstraints.BP_WidgetInventoryEntryFilterStructureConstraints_C.GetInteractionActor
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        PlayerController                                                 (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IControllerInteractionInterface>CallFunc_GetLastInteractedActor_self_CastInput                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetLastInteractedActor_ReturnValue                      (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

class AActor* UBP_WidgetInventoryEntryFilterStructureConstraints_C::GetInteractionActor(class ANWXPlayerController* PlayerController, TScriptInterface<class IControllerInteractionInterface> CallFunc_GetLastInteractedActor_self_CastInput, class AActor* CallFunc_GetLastInteractedActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WidgetInventoryEntryFilterStructureConstraints_C", "GetInteractionActor");

	Params::UBP_WidgetInventoryEntryFilterStructureConstraints_C_GetInteractionActor_Params Parms{};

	Parms.PlayerController = PlayerController;
	Parms.CallFunc_GetLastInteractedActor_self_CastInput = CallFunc_GetLastInteractedActor_self_CastInput;
	Parms.CallFunc_GetLastInteractedActor_ReturnValue = CallFunc_GetLastInteractedActor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}



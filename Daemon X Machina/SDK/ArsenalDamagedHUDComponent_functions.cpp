#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ArsenalDamagedHUDComponent.ArsenalDamagedHUDComponent_C
// (None)

class UClass* UArsenalDamagedHUDComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ArsenalDamagedHUDComponent_C");

	return Clss;
}


// ArsenalDamagedHUDComponent_C ArsenalDamagedHUDComponent.Default__ArsenalDamagedHUDComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UArsenalDamagedHUDComponent_C* UArsenalDamagedHUDComponent_C::GetDefaultObj()
{
	static class UArsenalDamagedHUDComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UArsenalDamagedHUDComponent_C*>(UArsenalDamagedHUDComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ArsenalDamagedHUDComponent.ArsenalDamagedHUDComponent_C.AddWidgetToHUDMission
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHUD*                        CallFunc_GetHUD_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHUDMission_C*               K2Node_DynamicCast_AsHUDMission                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArsenalDamagedHUDComponent_C::AddWidgetToHUDMission(class UUserWidget* Widget, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AHUD* CallFunc_GetHUD_ReturnValue, class AHUDMission_C* K2Node_DynamicCast_AsHUDMission, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalDamagedHUDComponent_C", "AddWidgetToHUDMission");

	Params::UArsenalDamagedHUDComponent_C_AddWidgetToHUDMission_Params Parms{};

	Parms.Widget = Widget;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetHUD_ReturnValue = CallFunc_GetHUD_ReturnValue;
	Parms.K2Node_DynamicCast_AsHUDMission = K2Node_DynamicCast_AsHUDMission;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}



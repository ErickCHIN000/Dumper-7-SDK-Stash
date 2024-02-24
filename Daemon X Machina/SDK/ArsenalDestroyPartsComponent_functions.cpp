#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ArsenalDestroyPartsComponent.ArsenalDestroyPartsComponent_C
// (None)

class UClass* UArsenalDestroyPartsComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ArsenalDestroyPartsComponent_C");

	return Clss;
}


// ArsenalDestroyPartsComponent_C ArsenalDestroyPartsComponent.Default__ArsenalDestroyPartsComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UArsenalDestroyPartsComponent_C* UArsenalDestroyPartsComponent_C::GetDefaultObj()
{
	static class UArsenalDestroyPartsComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UArsenalDestroyPartsComponent_C*>(UArsenalDestroyPartsComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ArsenalDestroyPartsComponent.ArsenalDestroyPartsComponent_C.SetWeaponLeftVisibility
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               NewVisibility                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UArsenalDestroyPartsComponent_C::SetWeaponLeftVisibility(bool NewVisibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalDestroyPartsComponent_C", "SetWeaponLeftVisibility");

	Params::UArsenalDestroyPartsComponent_C_SetWeaponLeftVisibility_Params Parms{};

	Parms.NewVisibility = NewVisibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalDestroyPartsComponent.ArsenalDestroyPartsComponent_C.CancelAttack
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsLeft                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UArsenalDestroyPartsComponent_C::CancelAttack(bool IsLeft)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalDestroyPartsComponent_C", "CancelAttack");

	Params::UArsenalDestroyPartsComponent_C_CancelAttack_Params Parms{};

	Parms.IsLeft = IsLeft;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalDestroyPartsComponent.ArsenalDestroyPartsComponent_C.ShowOuterHair
// (Event, Public, BlueprintEvent)
// Parameters:

void UArsenalDestroyPartsComponent_C::ShowOuterHair()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalDestroyPartsComponent_C", "ShowOuterHair");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ArsenalDestroyPartsComponent.ArsenalDestroyPartsComponent_C.ShowOuter
// (Event, Public, BlueprintEvent)
// Parameters:

void UArsenalDestroyPartsComponent_C::ShowOuter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalDestroyPartsComponent_C", "ShowOuter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ArsenalDestroyPartsComponent.ArsenalDestroyPartsComponent_C.SetWeaponRightVisibility
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               NewVisibility                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UArsenalDestroyPartsComponent_C::SetWeaponRightVisibility(bool NewVisibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalDestroyPartsComponent_C", "SetWeaponRightVisibility");

	Params::UArsenalDestroyPartsComponent_C_SetWeaponRightVisibility_Params Parms{};

	Parms.NewVisibility = NewVisibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalDestroyPartsComponent.ArsenalDestroyPartsComponent_C.ExecuteUbergraph_ArsenalDestroyPartsComponent
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_newVisibility                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_newVisibility1                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_isLeft                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AArsenalCharacter_C*         K2Node_DynamicCast_AsArsenal_Character                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AArsenalCharacter_C*         K2Node_DynamicCast_AsArsenal_Character1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AArsenalCharacter_C*         K2Node_DynamicCast_AsArsenal_Character2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AArsenalCharacter_C*         K2Node_DynamicCast_AsArsenal_Character3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess3                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AArsenalCharacter_C*         K2Node_DynamicCast_AsArsenal_Character4                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess4                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UArsenalDestroyPartsComponent_C::ExecuteUbergraph_ArsenalDestroyPartsComponent(int32 EntryPoint, bool K2Node_Event_newVisibility, bool K2Node_Event_newVisibility1, class AActor* CallFunc_GetOwner_ReturnValue, bool K2Node_Event_isLeft, class AArsenalCharacter_C* K2Node_DynamicCast_AsArsenal_Character, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue1, class AActor* CallFunc_GetOwner_ReturnValue2, class AArsenalCharacter_C* K2Node_DynamicCast_AsArsenal_Character1, bool K2Node_DynamicCast_bSuccess1, class AArsenalCharacter_C* K2Node_DynamicCast_AsArsenal_Character2, bool K2Node_DynamicCast_bSuccess2, class AActor* CallFunc_GetOwner_ReturnValue3, class AArsenalCharacter_C* K2Node_DynamicCast_AsArsenal_Character3, bool K2Node_DynamicCast_bSuccess3, class AActor* CallFunc_GetOwner_ReturnValue4, class AArsenalCharacter_C* K2Node_DynamicCast_AsArsenal_Character4, bool K2Node_DynamicCast_bSuccess4, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalDestroyPartsComponent_C", "ExecuteUbergraph_ArsenalDestroyPartsComponent");

	Params::UArsenalDestroyPartsComponent_C_ExecuteUbergraph_ArsenalDestroyPartsComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_newVisibility = K2Node_Event_newVisibility;
	Parms.K2Node_Event_newVisibility1 = K2Node_Event_newVisibility1;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_Event_isLeft = K2Node_Event_isLeft;
	Parms.K2Node_DynamicCast_AsArsenal_Character = K2Node_DynamicCast_AsArsenal_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetOwner_ReturnValue1 = CallFunc_GetOwner_ReturnValue1;
	Parms.CallFunc_GetOwner_ReturnValue2 = CallFunc_GetOwner_ReturnValue2;
	Parms.K2Node_DynamicCast_AsArsenal_Character1 = K2Node_DynamicCast_AsArsenal_Character1;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.K2Node_DynamicCast_AsArsenal_Character2 = K2Node_DynamicCast_AsArsenal_Character2;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.CallFunc_GetOwner_ReturnValue3 = CallFunc_GetOwner_ReturnValue3;
	Parms.K2Node_DynamicCast_AsArsenal_Character3 = K2Node_DynamicCast_AsArsenal_Character3;
	Parms.K2Node_DynamicCast_bSuccess3 = K2Node_DynamicCast_bSuccess3;
	Parms.CallFunc_GetOwner_ReturnValue4 = CallFunc_GetOwner_ReturnValue4;
	Parms.K2Node_DynamicCast_AsArsenal_Character4 = K2Node_DynamicCast_AsArsenal_Character4;
	Parms.K2Node_DynamicCast_bSuccess4 = K2Node_DynamicCast_bSuccess4;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}

}



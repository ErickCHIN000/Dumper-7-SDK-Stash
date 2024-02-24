#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ShieldComponent.ShieldComponent_C
// (None)

class UClass* UShieldComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ShieldComponent_C");

	return Clss;
}


// ShieldComponent_C ShieldComponent.Default__ShieldComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UShieldComponent_C* UShieldComponent_C::GetDefaultObj()
{
	static class UShieldComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UShieldComponent_C*>(UShieldComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ShieldComponent.ShieldComponent_C.OverrideCollisionSetting
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         PrimitiveComponent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShieldComponent_C::OverrideCollisionSetting(class AActor* OwnerActor, class UPrimitiveComponent* PrimitiveComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShieldComponent_C", "OverrideCollisionSetting");

	Params::UShieldComponent_C_OverrideCollisionSetting_Params Parms{};

	Parms.OwnerActor = OwnerActor;
	Parms.PrimitiveComponent = PrimitiveComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShieldComponent.ShieldComponent_C.ExecuteUbergraph_ShieldComponent
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_OwnerActor                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_Event_primitiveComponent                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BlockCollisionByCharacterType_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetCollisionObjectTypeByCharacterType_result            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UShieldComponent_C::ExecuteUbergraph_ShieldComponent(int32 EntryPoint, class AActor* K2Node_Event_OwnerActor, class UPrimitiveComponent* K2Node_Event_primitiveComponent, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BlockCollisionByCharacterType_ReturnValue, bool CallFunc_SetCollisionObjectTypeByCharacterType_result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShieldComponent_C", "ExecuteUbergraph_ShieldComponent");

	Params::UShieldComponent_C_ExecuteUbergraph_ShieldComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OwnerActor = K2Node_Event_OwnerActor;
	Parms.K2Node_Event_primitiveComponent = K2Node_Event_primitiveComponent;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_BlockCollisionByCharacterType_ReturnValue = CallFunc_BlockCollisionByCharacterType_ReturnValue;
	Parms.CallFunc_SetCollisionObjectTypeByCharacterType_result = CallFunc_SetCollisionObjectTypeByCharacterType_result;

	UObject::ProcessEvent(Func, &Parms);

}

}



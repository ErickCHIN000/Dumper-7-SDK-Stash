#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0xD0 - 0xB0)
// BlueprintGeneratedClass DamageNotifierComponent.DamageNotifierComponent_C
class UDamageNotifierComponent_C : public UActorComponent
{
public:
	FMulticastInlineDelegateProperty_            OnDamageTaken;                                     // 0xB0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnDamageTakenWithDamageType;                       // 0xC0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UDamageNotifierComponent_C* GetDefaultObj();

	void OnDamageTakenWithDamageType__DelegateSignature(class UClass* DamageType);
	void OnDamageTaken__DelegateSignature();
};

}



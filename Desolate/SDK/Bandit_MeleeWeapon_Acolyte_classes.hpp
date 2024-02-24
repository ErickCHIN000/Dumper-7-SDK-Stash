#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xA78 - 0xA70)
// BlueprintGeneratedClass Bandit_MeleeWeapon_Acolyte.Bandit_MeleeWeapon_Acolyte_C
class ABandit_MeleeWeapon_Acolyte_C : public ABandit_MeleeWeapon_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA70(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABandit_MeleeWeapon_Acolyte_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_Bandit_MeleeWeapon_Acolyte(int32 EntryPoint, class AActor* K2Node_Event_OtherActor, float K2Node_Event_DeltaSeconds);
};

}



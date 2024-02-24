#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x278 - 0x220)
// BlueprintGeneratedClass ba_Room_base.ba_Room_base_C
class Aba_Room_base_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UTextRenderComponent*                  TextRender;                                        // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class Aba_RoomUpgrades_C*                    Room_Upgrades;                                     // 0x238(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class Aba_Room_Controller_C*                 Room_Controller;                                   // 0x240(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class Aba_Room_base_C*                       Next_Better_Room;                                  // 0x248(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class Aba_Room_base_C*                       Next_Room_Option_A;                                // 0x250(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class Aba_Room_base_C*                       Next_Room_Option_B;                                // 0x258(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Nazwa;                                             // 0x260(0x18)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class Aba_Room_base_C* GetDefaultObj();

	void Teleport(class ANote* Destination, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocationAndRotation_SweepHitResult, bool CallFunc_K2_SetActorLocationAndRotation_ReturnValue);
	void UserConstructionScript();
	void Set_Room_Control(class Aba_Room_Controller_C* NewParam);
	void Show_Upgrades();
	void ReceiveBeginPlay();
	void Update_A();
	void Update_B();
	void Delete_Room();
	void ExecuteUbergraph_ba_Room_base(int32 EntryPoint, class Aba_Room_Controller_C* K2Node_DynamicCast_AsBa_Room_Controller, bool K2Node_DynamicCast_bSuccess, class Aba_Room_Controller_C* K2Node_CustomEvent_NewParam);
};

}



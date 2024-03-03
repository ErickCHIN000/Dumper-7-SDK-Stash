#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x52 (0x59A - 0x548)
// BlueprintGeneratedClass example_npc_base.example_npc_base_C
class AExample_npc_base_C : public AExample_tps_character_parent_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x548(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UBoxComponent*                         InteractableArea;                                  // 0x550(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  StaticMesh;                                        // 0x558(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                      InteractionWidget;                                 // 0x560(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Scene;                                             // 0x568(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAC_Interactable_C*                    AC_Interactable;                                   // 0x570(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	enum class E_NPC_Types                       NPCType;                                           // 0x578(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1382[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SplinePoint;                                       // 0x57C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            OverlapSound;                                      // 0x580(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PlayMontage_;                                      // 0x588(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1388[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          Montage1;                                          // 0x590(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsWaiting_;                                        // 0x598(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ShouldRotate_;                                     // 0x599(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class AExample_npc_base_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void Interaction();
	void End_Interaction();
	void Initialize();
	void Remove_Interaction();
	void Game_Load();
	void BndEvt__bp_dlg_component_K2Node_ComponentBoundEvent_2_ed_dlg_started__DelegateSignature(class Abp_dlg_actor_C* Dlg_actor, enum class Enum_dlg_start Dlg_status);
	void ExecuteUbergraph_example_npc_base(int32 EntryPoint, class Abp_dlg_actor_C* K2Node_ComponentBoundEvent_dlg_actor, enum class Enum_dlg_start K2Node_ComponentBoundEvent_dlg_status, TSet<class UPrimitiveComponent*> K2Node_MakeSet_Set, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue);
};

}



#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x280 - 0x278)
// BlueprintGeneratedClass o_dlg_pos1A.o_dlg_pos1A_C
class AO_dlg_pos1A_C : public AObject_dlg_cinematic_parent_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class AO_dlg_pos1A_C* GetDefaultObj();

	void Pack_cameras(bool* Return_node);
	void Pack_widgets(bool* Return_node);
	void Pack_actors(bool* Return_node, class AActor* CallFunc_get_actor_actor_proxy, class AActor* CallFunc_get_actor_actor_proxy_1, class AActor* CallFunc_get_actor_actor_proxy_2);
	void ExecuteUbergraph_o_dlg_pos1A(int32 EntryPoint);
};

}


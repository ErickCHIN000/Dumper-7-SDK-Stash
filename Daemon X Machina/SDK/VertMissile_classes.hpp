#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xB10 - 0xB08)
// BlueprintGeneratedClass VertMissile.VertMissile_C
class AVertMissile_C : public ATTLStandardMissile
{
public:
	class URaderTargetComponent_C*               RaderTargetComponent;                              // 0xB08(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AVertMissile_C* GetDefaultObj();

	void UserConstructionScript();
};

}



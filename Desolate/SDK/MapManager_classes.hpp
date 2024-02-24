#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x310 - 0x300)
// BlueprintGeneratedClass MapManager.MapManager_C
class AMapManager_C : public ASHMapManager
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x300(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x308(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AMapManager_C* GetDefaultObj();

	void GeneranteMapObjectsTable();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_MapManager(int32 EntryPoint, float K2Node_Event_DeltaSeconds);
};

}



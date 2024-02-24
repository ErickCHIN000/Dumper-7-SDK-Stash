#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x21 (0x49 - 0x28)
// BlueprintGeneratedClass AnimMetaData_TraceSocketData.AnimMetaData_TraceSocketData_C
class UAnimMetaData_TraceSocketData_C : public UAnimMetaData
{
public:
	class FName                                  TopSocket;                                         // 0x28(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  BottomSocket;                                      // 0x30(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  MeleeSocket;                                       // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CreatureSocket;                                    // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsMirroredItem;                                    // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAnimMetaData_TraceSocketData_C* GetDefaultObj();

	void Get_Is_Mirrored(bool* IsMirroredItem);
	void Get_Sockets(class FName* TopSocket, class FName* BottomSocket, class FName* MeleeSocket, class FName* CreatureSocket);
};

}



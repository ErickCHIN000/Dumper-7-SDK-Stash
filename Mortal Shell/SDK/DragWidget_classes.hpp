#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x98 - 0x88)
// BlueprintGeneratedClass DragWidget.DragWidget_C
class UDragWidget_C : public UDragDropOperation
{
public:
	class UUserWidget*                           WidgetToDrag;                                      // 0x88(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector2D                             DropWindowOffset;                                  // 0x90(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UDragWidget_C* GetDefaultObj();

};

}



# cave_explore
a cave explore game
>1. 等级机制
>>每级经验槽为等级数乘10,槽满升一级,血槽,体力槽和魔力槽为等级数乘10,攻击力增加新等级数,防御力增加0.02

>2. 技能机制
>> 1. 技能编号0 空手攻击(介绍:发动者体力值减1,被击者血量减攻击力到攻击力*1.5中随机值再乘对方防御系数)
>> 2. 技能编号1 小治愈术(介绍:发动者血量加血槽的10%到30%之间随机值,魔力减2)
>> 3. 技能编号3 等待(介绍:什么都不做)
>> 4. 技能编号4 武器攻击(介绍:发动者体力值减3,被击者血量减攻击力到攻击力*1.5中随机值加武器攻击力再乘对方防御系数)
>3. 战斗机制
>> 1. 伤害=攻击力生成随机数*敌方防御系数 

>4. 武器机制
>> 1.武器等级: 
> >> * 0:空手(攻击+0)
> >> * 1:木刀(攻击+5)
> >> * 2:铁刀(攻击+12)
> >> * 3:钢刀(攻击+20)
/*******************************************************************************
*                                 AMetal
*                       ----------------------------
*                       innovating embedded platform
*
* Copyright (c) 2001-2018 Guangzhou ZHIYUAN Electronics Co., Ltd.
* All rights reserved.
*
* Contact information:
* web site:    http://www.zlg.cn/
*******************************************************************************/

/**
 * \file
 * \brief GPIO ���̣�ͨ����׼�ӿ�ʵ��
 *
 * - �������裺
 *   1. �� J14 �� KEY �� PIOC_7 �̽���һ��
 *
 * - ʵ������
 *   1. ��һ�ΰ��� LED0 ��Ϩ���ٰ�һ�ΰ��� LED0 ��������˷�����
 *
 * \note
 *    LED0 ��Ҫ�̽� J9 ����ñ�����ܱ� PIOC_9 ���ơ�
 *
 * \par Դ����
 * \snippet demo_hk32f103rbt6_std_gpio.c src_hk32f103rbt6_std_gpio
 *
 * \internal
 * \par Modification History
 * - 1.00 17-08-24  zcb, first implementation
 * \endinternal
 */

/**
 * \addtogroup demo_if_hk32f103rbt6_std_gpio
 * \copydoc demo_hk32f103rbt6_std_gpio.c
 */

/** [src_hk32f103rbt6_std_gpio] */
#include "am_vdebug.h"
#include "am_hk32f103rbt6.h"
#include "am_board.h"
#include "demo_std_entries.h"
#include "demo_hk32f103rbt6_core_entries.h"

#define INPUT_PIN  PIOC_7 /**< \brief �������� */
#define OUTPUT_PIN PIOC_9 /**< \brief ������� PIOC_9��LED���� */

/**
 * \brief �������
 */
void demo_hk32f103rbt6_core_std_gpio_entry (void)
{
    AM_DBG_INFO("demo hk32f103rbt6_core std gpio!\r\n");

    demo_std_gpio_entry(INPUT_PIN, OUTPUT_PIN);
}
/** [src_hk32f103rbt6_std_gpio] */

/* end of file */